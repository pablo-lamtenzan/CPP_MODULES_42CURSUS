/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: plamtenz <plamtenz@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/12/24 18:18:15 by pablo        #+#   ##    ##    #+#       */
/*   Updated: 2021/01/22 15:36:33 by plamtenz    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	srand(time(NULL));

	Bureaucrat	B("B", 1);
	PresidentialPardonForm F_P("X");
	RobotomyRequestForm F_R("Y");
	ShrubberyCreationForm F_S("Z");

	std::cout << std::endl;

	try {
		F_P.execute(B);
	} catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
	B.signForm(F_P);
	B.executeForm(F_P);

	std::cout << std::endl;
	
	try {
		F_R.execute(B);
	} catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
	B.signForm(F_R);
	B.executeForm(F_R);

	std::cout << std::endl;

	try {
		F_S.execute(B);
	} catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
	B.signForm(F_S);
	B.executeForm(F_S);

	std::cout << std::endl;

	std::cout << "EXIT" << std::endl;
	
	return (0);
}