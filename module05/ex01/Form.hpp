/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:42:35 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 10:45:26 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

#include <iostream>
#include <string>
#include <stdexcept>
#include <stdbool.h>

#include "Bureaucrat.hpp"

#define _HIGHT Form::GradeTooHighException
#define _LOW Form::GradeToolowException

class Form
{
    private :

    const std::string __name;
    const int __GradeSign;
    const int __GradeExec;
    bool _signed;
    
    public :

    // Constructors
    Form(std::string name, int sign, int exec);
    Form(const Form &src);

    // Destructors
    ~Form();

    // Operators
    Form &operator= (const Form &src);

    // Shared Methods
    const std::string getName() const;
    const int getGradeSign() const;
    const int getGradeExec() const;
    bool isSigned() const;
    void beSigned(const Bureaucrat &obj); // form is signed if bureaucrat is HighEnounght

    // Shared Classes

    class GradeTooHighException : public std::exception
    {
        private :

        int __grade;
        
        public :

        // Constructors
        GradeTooHighException(int grade);
        GradeTooHighException(const GradeTooHighException &src);

        // Destructors
        ~GradeTooHighException() throw();

        // Operators
        GradeTooHighException &operator= (const GradeTooHighException &src);

        // Shared Methods
        int getGrade() const;
        const std::string TooHigh() const throw();
    };

    class GradeToolowException : public std::exception
    {
        private :

        int __grade;
    
        public :

        // Constructors
        GradeToolowException(int grade);
        GradeToolowException(const GradeToolowException &src);
        
        // Destructors
        ~GradeToolowException() throw();

        // Operators
        GradeToolowException &operator= (const GradeToolowException &src);

        // Shared Methods
        int getGrade() const;
        const std::string TooLow()const throw();
    };
    
};

std::ostream &operator<< (std::ostream &out, const Form &src);

#endif