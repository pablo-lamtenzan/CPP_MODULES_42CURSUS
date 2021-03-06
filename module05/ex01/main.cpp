/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: plamtenz <plamtenz@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/09 22:35:36 by plamtenz     #+#   ##    ##    #+#       */
/*   Updated: 2021/01/22 15:25:57 by plamtenz    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat A("A", 1);
	Bureaucrat B("B", 150);
	Form	f("Form", 149, 1);
	try{
		std::cout << f << std::endl;
		B.signForm(f);
	} catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	A.signForm(f);
	Form	g("GForm", 2, 1);
	std::cout << g << std::endl;

	try {
		g.beSigned(B);
	} catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	try {
		f.beSigned(B);
	} catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	g.beSigned(A);
	std::cout << g << std::endl;

	std::cout << "EXIT" << std::endl;
	
	return (0);
}