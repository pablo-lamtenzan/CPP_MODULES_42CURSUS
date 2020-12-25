/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:42:35 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/24 17:15:04 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

#define F_HIGHT Form::GradeTooHighException
#define F_LOW Form::GradeToolowException

class Form
{
    std::string			name;
    int 				F_CREATE;
    int 				F_EXEC;
    bool 				is_signed;
	Form();
    
    public :

    Form(const std::string& n, int sign, int exec);
    Form(const Form& src);
    ~Form();
    Form&				operator=(const Form& src);
    const std::string&	getName() const;
    int					getGradeSign() const;
    int					getGradeExec() const;
    bool				isSigned() const;
    void				beSigned(Bureaucrat& f);

    class GradeTooHighException : public std::exception { const char* what() const throw(); };
 	class GradeToolowException : public std::exception { const char* what() const throw(); };
    
};

std::ostream& operator<<(std::ostream& out, const Form& src);

#endif