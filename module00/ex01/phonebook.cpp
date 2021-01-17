/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 22:33:48 by pablo             #+#    #+#             */
/*   Updated: 2020/12/22 10:46:19 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
//#include <tr1/regex>
#include <regex>
#include <iomanip>

/*
** "regex" can be replaced by "tr1::regex" but is deprecated and some versions of
** gcc/clang compilers doesn't support it. For that reason i decided to use
** regex to avoid my correctors have to find the right version of gcc/clang.
** I writting this comment to make sure while the correction i can justify the use of regex.
**
** std::regex and std::tr1::regex are the same. If you don't trust me you can update
** your gcc/clang to the right version and launch my code... The result will be the same.
**
** This is what happens when we code in cpp98 in 2020 ...
*/

# define REGEX_ALPHA "([a-zA-Z]|[ ])+"
# define REGEX_ALNUM "([a-zA-Z0-9]|[ ])+"
# define REGEX_NUM "[0-9]+"
# define REGEX_EMAIL "(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+"
# define REGEX_FRPHONE "^((\\+)33|0)[1-9](\\d{2}){4}$"
# define REGEX_DATE "^([0-2][0-9]|(3)[0-1])(\\/)(((0)[0-9])|((1)[0-2]))(\\/)\\d{4}$"
# define PIPE_SEP " | "

class Phonebook
{
	private:

	std::string firtsname;
	std::string lastname;
	std::string nickname;
	std::string login;
	std::string postal_addr;
	std::string email_addr;
	std::string phone_number;
	std::string birthday;
	std::string fav_meal;
	std::string underwear_color;
	std::string darkest_secret;

	public:
	Phonebook() {}
	~Phonebook() {}

	const std::string& get_firstname() const {return (firtsname);}
	const std::string& get_lastname() const {return (lastname);}
	const std::string& get_nickname() const {return (nickname);}
	const std::string& get_login() const {return (login);}
	const std::string& get_postal_addr() const {return (postal_addr);}
	const std::string& get_email_addr() const {return (email_addr);}
	const std::string& get_phone_number() const {return (phone_number);}
	const std::string& get_birthday() const {return (birthday);}
	const std::string& get_fav_meal() const {return (fav_meal);}
	const std::string& get_underwear_color() const {return (underwear_color);}
	const std::string& get_darkest_secret() const {return (darkest_secret);}
	bool sanitize_input(const std::string& regexes , std::string*const dest, bool once);
	void add();
	void display();
};

bool		Phonebook::sanitize_input(const std::string& regexes , std::string*const dest, bool once)
{
	const std::regex	pattern(regexes.c_str());
	std::string			tmp;

	if (!once)
		std::cout << ">> ";
	std::getline(std::cin, tmp);
	if (std::regex_match(tmp, pattern))
	{
		*dest = tmp;
		return (true);
	}
	return (false);
}

void		Phonebook::add()
{
	static const char*const outputs[] {
		"Contact First Name:",
		"Contact Last Name:",
		"Contact Nickname:",
		"Contact Login:",
		"Contact Postal Address:",
		"Contact Email Address:",
		"Contact Phone number:",
		"Contact Birthday:",
		"Contact Favorite Meal:",
		"Contact Underwear Color:",
		"Contact Darkest Secret:"
	};
	static const char*const regexes[] {
		REGEX_ALPHA,
		REGEX_ALPHA,
		REGEX_ALNUM,
		REGEX_ALPHA,
		REGEX_NUM,
		REGEX_EMAIL,
		REGEX_FRPHONE,
		REGEX_DATE,
		REGEX_ALPHA,
		REGEX_ALPHA,
		REGEX_ALPHA
	};
	std::string*const locations[] {
		&firtsname,
		&lastname,
		&nickname,
		&login,
		&postal_addr,
		&email_addr,
		&phone_number,
		&birthday,
		&fav_meal,
		&underwear_color,
		&darkest_secret
	};
	size_t							index = 0;
	size_t							last = -1;
	std::regex						regex;
	bool							once = true;
	
	do
	{
		if (index != last)
			std::cout << outputs[index] << std::endl;
		last = index;
		if (sanitize_input(regexes[index], locations[index], once))
			index++;
		else if (!std::cin.eof() && !once)
			std::cout << "Bad format, please try again." << std::endl;
		once = false;
	}
	while (index < sizeof(outputs) / sizeof(*outputs) && !std::cin.eof());
}

void		Phonebook::display()
{
	std::cout << "Fist Name: " << get_firstname() << std::endl;
	std::cout << "Last Name: " << get_lastname() << std::endl;
	std::cout << "Nickame: " << get_nickname() << std::endl;
	std::cout << "Login: " << get_login() << std::endl;
	std::cout << "Postal Address: " << get_postal_addr() << std::endl;
	std::cout << "Email Address: " << get_email_addr() << std::endl;
	std::cout << "Phone Number: " << get_phone_number() << std::endl;
	std::cout << "Birthday: " << get_birthday() << std::endl;
	std::cout << "Favorite Meal: " << get_fav_meal() << std::endl;
	std::cout << "Underwear Color: " << get_underwear_color() << std::endl;
	std::cout << "Darkest Secret: " << get_darkest_secret() << std::endl;
}

static int		check_index(const std::string& s)
{
	const std::regex pattern(REGEX_NUM);
	return (std::regex_match(s, pattern) ? std::atoi(s.c_str()) : -1);
}

static std::string print_padded(const std::string& target)
{
	std::string res(target);
	const size_t size = res.size();
	size_t		i;

	if (size > 10)
	{
		res.at(9) = '.';
		i = 9;
		while (++i < size)
			res.at(i) = '\0';
	}
	else
	{
		i = size - 1;
		while (++i < 10)
			res.append(" ");
	}
	return (res);
}

static void		search(Phonebook Contacts[8], size_t len)
{
	size_t		i = -1;
	std::string input;
	size_t		index;

	if (!len)
	{
		std:: cout << "Oh no! 42 Phonebook is empty." << std::endl;
		return ;
	}
	while (++i < len)
		std::cout << print_padded(std::to_string(i)) << PIPE_SEP \
		<< print_padded(Contacts[i].get_firstname()) << PIPE_SEP \
		<< print_padded(Contacts[i].get_lastname()) << PIPE_SEP \
		<< print_padded(Contacts[i].get_nickname()) <<  std::endl;
	std::cout << "Please, type an index to proceed:" << std::endl;
	std::cout << ">> ";
	std::cin >> input;
	if (((index = check_index(input)) == -1 || index >= len) && !std::cin.eof())
		std::cout << "This is not a valid index ..." << std::endl;
	else if (!std::cin.eof())
		Contacts[index].display();
}

int				main()
{
	int			len = 0;
	std::string	command;
	Phonebook	Contacts[8];

	std::cout << "This is the 42 Phonebook!" << std::endl;
	while (!std::cin.eof())
	{
		std::cout << "Type a command, please:" << std::endl << ">> ";
		std::cin >> command;
		if (command == "ADD")
		{
			if (len >= 8)
				std::cout << "Phone Book is full!" << std::endl;
			else
			{
				Contacts[len] = Phonebook();
				Contacts[len].add();
				len++;
			}
		}
		else if (command == "SEARCH")
			search(Contacts, len);
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Unkown command: \"" << command << "\": Usage: phonebook < ADD > | < SEARCH > | < EXIT >" << std::endl;
	}
	std::cout << "EXIT" << std::endl;
	return (0);
}