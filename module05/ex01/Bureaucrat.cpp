/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 08:38:20 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 22:58:43 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructors

Bureaucrat::Bureaucrat()
{
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int  grade)
{
    this->__name = name;
    CheckExeption(grade);
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    *this = src;
    return ;
}

HIGHT::GradeTooHighException(int grade) : __grade(grade)
{
    
}

HIGHT::GradeTooHighException(const HIGHT &src) : __grade(src.__grade)
{
    
}

LOW::GradeToolowException(int grade) : __grade(grade)
{
    
}

LOW::GradeToolowException(const LOW &src) : __grade(src.__grade)
{
    
}

// Destructors

Bureaucrat::~Bureaucrat()
{
    return ;
}

HIGHT::~GradeTooHighException() throw()
{
    
}

LOW::~GradeToolowException() throw()
{
    
}

// Operators

Bureaucrat
&Bureaucrat::operator= (const Bureaucrat &src)
{
    if (this == &src)
    {
        this->__name = src.__name;
        this->__grade = src.__grade;
    }
    return (*this);
}

std::ostream
&operator<< (std::ostream &out, const Bureaucrat &src)
{
    out << '<' << src.getName() << ">, bureaucrat grade <" << src.getGrade() << '>' << std::endl;
    return (out);
}

HIGHT
&HIGHT::operator= (const HIGHT &src)
{
    if (this != &src)
        this->__grade = src.__grade;
    return (*this);
}

LOW
&LOW::operator= (const LOW &src)
{
    if (this != &src)
        this->__grade = src.__grade;
    return (*this);
}

// Methods

std::string
Bureaucrat::getName() const
{
    return (this->__name);
}

int
Bureaucrat::getGrade() const
{
    return (this->__grade);
}

void
Bureaucrat::setGrade(int grade)
{
    CheckExeption(grade);
}

void
Bureaucrat::CheckExeption(int grade)
{
    if (grade < 1)
        throw GradeTooHighException(grade);
    if (grade > 150)
        throw GradeToolowException(grade);
    this->__grade = grade;
}

void
Bureaucrat::IncrementGrade()
{
    this->CheckExeption(this->__grade - 1);
    return ;
}

void
Bureaucrat::DecrementGrade()
{
    this->CheckExeption(this->__grade + 1);
    return ;
}

void
Bureaucrat::signForm(Form &obj)
{
    if (obj.isSigned())
    {
        std::cout << '<' << this->__name << "> cannot sign <" << obj.getName() << "> because is already signed" <<  std::endl;
        return ;
    }
    try
    {
        obj.beSigned(*this);
        std::cout << '<' << this->__name << "> signs <" << obj.getName() << '>' << std::endl;
    }
    catch (Form::GradeToolowException &)
    {
        std::cout << '<' << this->__name << "> cannot sign <" << obj.getName() << "> because grade is too low" <<  std::endl;
    }
}

int
HIGHT::getGrade() const
{
    return (this->__grade);
}

const char
*HIGHT::what() const throw()
{
    return ("Grade is too high\n");
}

int
LOW::getGrade() const
{
    return (this->__grade);
}

const char
*LOW::what() const throw()
{
    return ("Grade is too low\n");
}
