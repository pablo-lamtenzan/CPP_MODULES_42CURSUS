/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:13:16 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/06 09:43:11 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors

Form::Form(std::string name, int sign, int exec, std::string const target) : __name(name), __GradeSign(sign), __GradeExec(exec), _signed(false), __target(target)
{
    if (sign < 1)
        throw GradeTooHighException(sign);
    else if (sign > 150)
        throw GradeToolowException(sign);
    if (exec < 1)
        throw GradeToolowException(exec);
    else if (exec > 150)
        throw GradeToolowException(exec);
    return ;
}

Form::Form() : __name(NULL), __GradeSign(0), __GradeExec(0), _signed(false), __target(NULL)
{
    
}

Form::Form(const Form &src) : __name(src.__name), __GradeSign(src.__GradeSign), __GradeExec(src.__GradeExec), _signed(src._signed),  __target(src.__target)
{
    return ;
}

_HIGHT::GradeTooHighException(int grade) : __grade(grade)
{
    
}

_HIGHT::GradeTooHighException(const _HIGHT &src) : __grade(src.__grade)
{
    
}

_LOW::GradeToolowException(int grade) : __grade(grade)
{
    
}

_LOW::GradeToolowException(const _LOW &src) : __grade(src.__grade)
{
    
}

// Destructors

Form::~Form()
{
    return ;
}

_HIGHT::~GradeTooHighException() throw()
{
    
}

_LOW::~GradeToolowException() throw()
{
    
}

// Operators

Form
&Form::operator= (const Form &src)
{
    return (*this);
}

std::ostream &operator<< (std::ostream &out, const Form &src)
{
    out << "Form: " << src.getName() << " (sign " << src.getGradeSign() << ", exec " << src.getGradeExec() << ")\n";
}

_HIGHT
&_HIGHT::operator= (const _HIGHT &src)
{
    if (this != &src)
        this->__grade = src.__grade;
    return (*this);
}

_LOW
&_LOW::operator= (const _LOW &src)
{
    if (this != &src)
        this->__grade = src.__grade;
    return (*this);
}

// Methods

const std::string
Form::getName() const
{
    return (this->__name);
}

const int
Form::getGradeSign() const
{
    return (this->__GradeSign);
}

const int
Form::getGradeExec() const
{
    return (this->__GradeSign);
}

bool
Form::isSigned() const
{
    return (this->_signed);
}

void
Form::beSigned(const Bureaucrat &obj)
{
    if (obj.getGrade() > this->__GradeSign)
        throw GradeToolowException(obj.getGrade());
    this->_signed = true;
    return ;
}

void
Form::execute(const Bureaucrat &executor) const
{
    if (!this->isSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > this->__GradeExec)
        throw GradeToolowException(executor.getGrade());
    this->__execute(executor);
}

std::string
Form::getTarget() const
{
    return (this->__target);
}

int
_HIGHT::getGrade() const
{
    return (this->__grade);
}

const char
*_HIGHT::what() const throw()
{
    return ("Grade is too high\n");
}

int
_LOW::getGrade() const
{
    return (this->__grade);
}

const char
*_LOW::what() const throw()
{
    return ("Grade is too low\n");
}

NOTSIGNED::FormNotSignedException()
{
    
}

NOTSIGNED::FormNotSignedException(const NOTSIGNED &src)
{
    
}

NOTSIGNED::~FormNotSignedException() throw()
{
    
}

NOTSIGNED
&NOTSIGNED::operator= (const NOTSIGNED &src)
{
    return (*this);
}

const char
*NOTSIGNED::what() const throw()
{
    return ("Form is not signed");
}