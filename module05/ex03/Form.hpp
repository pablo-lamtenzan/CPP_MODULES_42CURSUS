/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Form.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: plamtenz <plamtenz@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/05 09:42:35 by plamtenz     #+#   ##    ##    #+#       */
/*   Updated: 2021/01/22 15:45:30 by plamtenz    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

#define F_HIGHT Form::GradeTooHighException
#define F_LOW Form::GradeToolowException
#define F_SIGN Form::GradeNotSignedExection

class Form
{
    std::string			name;
	std::string			target;
    int 				F_CREATE;
    int 				F_EXEC;
    bool 				is_signed;
	Form();
    
    public :

    Form(const std::string& n, int sign, int exec, const std::string& target);
    Form(const Form& src);
    virtual ~Form();
    Form&				operator=(const Form& src);
    const std::string&	getName() const;
	const std::string&	getTarget() const;
    int					getGradeSign() const;
    int					getGradeExec() const;
    bool				isSigned() const;
    void				beSigned(Bureaucrat& f);
	virtual void		execute(Bureaucrat const& executor) const = 0;

    class GradeTooHighException : public std::exception { const char* what() const throw(); };
 	class GradeToolowException : public std::exception { const char* what() const throw(); };
    class GradeNotSignedExection : public std::exception { const char* what() const throw(); };
};

std::ostream& operator<<(std::ostream& out, const Form& src);
