/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 22:00:35 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/23 08:36:11 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int	print_error(const std::string& err_msg)
{
	std::cout << err_msg << std::endl;
	return (-1);
}

int main(int ac, const char** av)
{
	static const char*	const errors[] {
		"Error: Usage: Wrong argument number.",
		"Error: Arguments must not be empty!",
		"Error: File is not openable ..."
	};
	std::string filename;
	std::string	find;
	std::string replace;

	// Sanitize wrong argument number
	if (ac != 4)
		return (print_error(errors[0]));
	// Arguments must be not empty
	if ((filename = av[1]).empty() || (find = av[2]).empty() || (replace = av[3]).empty())
		return (print_error(errors[1]));
	// Open the filename
	std::ifstream ifs(filename);
	// Sanitize the fd
	if (!ifs.good())
		return (print_error(errors[2]));
	// Read the resulting file descriptor and write it in "buff"
	std::stringstream buff;
	buff << ifs.rdbuf();
	// Copy the resulting read-writted buffer in "target"
	std::string target = buff.str();
	// Inspect the resulting string and replace the occurences (npos means false, some std functions uses it as error catch value)
	size_t lenght;
	while ((lenght = target.find(find)) != std::string::npos)
		target.replace(lenght, find.length(), replace);
	// Opening the filename appended with ".replace" (new fd)
	std::ofstream ofs(filename + ".replace");
	// Sanitize the file descriptor
	if (!ofs.good())
		return (print_error(errors[2]));
	// Write the "seded" string in the ".replace" file
	ofs << target;
	// Close the both file descriptors
	ifs.close();
	ofs.close();
	return (0);
}
