/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 12:01:24 by pablo             #+#    #+#             */
/*   Updated: 2020/12/25 14:39:39 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	srand(time(NULL));
	
	Bureaucrat	B("B", 1);
	Intern		I;

	Form*	f1 = I.makeForm("shuberry creation", "Bender");
	Form*	f2 = I.makeForm("robotomy request", "Bender");
    Form*	f3 = I.makeForm("presidential pardon", "Bender");

	std::cout << std::endl << *f1 << std::endl << *f2 << std::endl << *f3 << std::endl << std::endl;

	B.signForm(*f1);
	B.executeForm(*f1);
	B.signForm(*f2);
	B.executeForm(*f2);
	B.signForm(*f3);
	B.executeForm(*f3);

	std::cout << std::endl;

	delete f1;
	delete f2;
	delete f3;

	std::cout << "EXIT" << std::endl;
	return (0);
}