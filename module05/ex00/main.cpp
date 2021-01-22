/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: plamtenz <plamtenz@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/05 09:31:26 by plamtenz     #+#   ##    ##    #+#       */
/*   Updated: 2021/01/22 15:22:42 by plamtenz    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat A("A", 1);
	Bureaucrat B("B", 150);

	try {
		A = Bureaucrat("A", 0);
	}catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	A = Bureaucrat("A", 1);

    std::cout << A << std::endl;
	A.DecrementGrade();
	std::cout << A << std::endl;
	A.IncrementGrade();
	std::cout << A << std::endl;

	try {
		A.IncrementGrade();
	}catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	std::cout << B << std::endl;
    try {
		B.DecrementGrade();
	}catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	std::cout << "EXIT" << std::endl;
	
	return (0);
}