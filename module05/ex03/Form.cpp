/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:13:16 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/24 18:37:06 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& n, int sign, int exec, const std::string& t) : name(n), target(t), F_CREATE(sign), F_EXEC(exec), is_signed(false)
{
	std::cout << "A new Form has been created!" << std::endl;
    if (sign < 1 || exec < 1)
        throw GradeTooHighException();
    if (sign > 150 || exec > 150)
        throw GradeToolowException();
}

Form::Form(const Form& src)
{
    std::cout << "A new Form has been created!" << std::endl;
	if (this != &src)
    	*this = src;
}

Form::~Form() { std::cout << "A form \"" << name << "\" has been destroyed!" << std::endl; }

Form&	Form::operator=(const Form& src)
{
    if (this != &src)
	{
		name = src.getName();
		F_CREATE = src.getGradeSign();
		F_EXEC = src.getGradeExec();
		is_signed = src.isSigned();
		target = src.getTarget();
	}
	return (*this);
}

std::ostream&		operator<<(std::ostream& out, const Form& src) { return (out << "Form: " << src.getName() << " (sign " << src.getGradeSign() << ", exec " << src.getGradeExec() << ")"); }
const std::string&	Form::getName() const { return (name); }
const std::string&	Form::getTarget() const { return (target); }
int					Form::getGradeSign() const { return (F_CREATE); }
int					Form::getGradeExec() const { return (F_EXEC); }
bool				Form::isSigned() const { return (is_signed); }
void				Form::beSigned(Bureaucrat& f)
{
	if (is_signed)
	{
		std::cout << "Form " << name << " can't be signed beacuse it was alredy signed." << std::endl;
		return ;
	}
    if (f.getGrade() > F_CREATE)
        throw GradeToolowException();
    is_signed = true;
}

const char*			F_HIGHT::what() const throw() { return ("Grade is too hight"); }
const char*			F_LOW::what() const throw() { return ("Grade is too low"); }
const char*			F_SIGN::what() const throw() { return ("Grade is not signed"); }