/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 08:38:20 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/24 15:43:05 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Undefinded"), grade(150) { std::cout << "An undefined Bureaucrat has been created!" << std::endl; }
Bureaucrat::Bureaucrat(const std::string& n, int g) : name(n)
{
	std::cout << "A new Bureaucrat has been created!" << std::endl;
    CheckExeption(g);
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	std::cout << "A new Bureaucrat has been created by copy!" << std::endl;
	if (this != &src)
    	*this = src;
}

Bureaucrat::~Bureaucrat() { std::cout << "A bureaucart \"" << name << "\" has been destroyed!" << std::endl; }

Bureaucrat&			Bureaucrat::operator=(const Bureaucrat& src)
{
    if (this != &src)
    {
        name = src.getName();
        grade = src.getGrade();
    }
    return (*this);
}

std::ostream&		operator<<(std::ostream& out, const Bureaucrat& src) { return (out << '<' << src.getName() << ">, bureaucrat grade <" << src.getGrade() << ">"); }

const std::string&	Bureaucrat::getName() const { return (name); }
int					Bureaucrat::getGrade() const { return (grade); }
void				Bureaucrat::CheckExeption(int g)
{
	if (g < 1)
	{
		this->~Bureaucrat();
		throw GradeTooHighException();
	}
	else if (g > 150)
	{
		this->~Bureaucrat();
		throw GradeToolowException();
	}
	else
		grade = g;
}

void
Bureaucrat::IncrementGrade()
{
	if (grade - 1 < 1)
	{
		this->~Bureaucrat();
		throw GradeTooHighException();
	}
	grade--;
}

void
Bureaucrat::DecrementGrade()
{
    if (grade + 1 > 150)
	{
		this->~Bureaucrat();
		throw GradeToolowException();
	}
	grade++;
}

const char*	HIGHT::what() const throw() { return ("Grade is too hight"); }
const char*	LOW::what() const throw() { return ("Grade is too low"); }

void		Bureaucrat::signForm(Form& f)
{
    if (f.isSigned())
        std::cout << '<' << name << "> cannot sign <" << f.getName() << "> because is already signed" <<  std::endl;
	else
	{
		try
    	{
        	f.beSigned(*this);
        	std::cout << '<' << name << "> signs <" << f.getName() << '>' << std::endl;
    	} catch (Form::GradeToolowException &)
    	{
        	std::cout << '<' << name << "> cannot sign <" << f.getName() << "> because grade is too low" <<  std::endl;
			throw GradeToolowException();
    	}
	}
}