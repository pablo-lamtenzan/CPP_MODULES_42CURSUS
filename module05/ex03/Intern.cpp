/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 10:12:48 by plamtenz          #+#    #+#             */
/*   Updated: 2021/02/23 13:19:18 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() { std::cout << "A new Intern has been created!" << std::endl; }
Intern::Intern(const Intern& src)
{
	std::cout << "A new Intern has been created by copy!" << std::endl;
	if (this != &src)
		*this = src;
}

Intern::~Intern() { std::cout << "A new Intern has been destroyed!" << std::endl; }

Intern&		Intern::operator=(const Intern& src) { (void)src; return (*this); }

static Form*	SF(const std::string& target) { return (new ShrubberyCreationForm(target)); }
static Form*	RF(const std::string& target) { return (new RobotomyRequestForm(target)); }
static Form*	PF(const std::string& target) { return (new PresidentialPardonForm(target)); }

Form*		Intern::makeForm(const std::string& type, const std::string& target)
{
	static const char*const names[] = {
		"shuberry creation",
		"robotomy request",
		"presidential pardon"
	};
	Form*	(*const methods[])(const std::string&) = {
		&SF,
		&RF,
		&PF
	};
	Form* res = NULL;
	for (size_t i = 0 ; i < sizeof(names) / sizeof(*names) ; i++)
		if (type == names[i])
			res = methods[i](target);

	if (res)
		std::cout << "Intern creates <" << *res << ">" << std::endl;
	else
		std::cout <<"Invalid type..." << std::endl;
	return (res);
}