/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Bureaucrat.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: plamtenz <plamtenz@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/05 08:11:52 by plamtenz     #+#   ##    ##    #+#       */
/*   Updated: 2021/01/22 15:45:12 by plamtenz    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

# pragma once

/*
** The dynamic exception specification "throw()" is deprecated today, i don't know if i must use it
** or not. Really, coding in cpp98 in 2020 is SO ANNOYING.
** In this page: https://en.cppreference.com/w/cpp/language/except_spec it seems it's needed
** by the exception destructor and what method (but i didn't completly got it). It seems its meaning is
** the same as "noexcept" that means to not raise any exeception.
*/

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

#define HIGHT Bureaucrat::GradeTooHighException
#define LOW Bureaucrat::GradeToolowException

class Form;

class Bureaucrat
{
    std::string			name;
    int					grade;

    public :

    Bureaucrat();
    Bureaucrat(const std::string& n, int g);
    Bureaucrat(const Bureaucrat& src);
    ~Bureaucrat();
    Bureaucrat&			operator=(const Bureaucrat& src);
    const std::string& 	getName() const;
    int					getGrade() const;
    void				CheckExeption(int g);
    void				IncrementGrade();
    void				DecrementGrade();
	void				signForm(Form& f);
	void				executeForm(Form const& form);

    class GradeTooHighException : public std::exception { const char* what() const throw(); };
 	class GradeToolowException : public std::exception { const char* what() const throw(); };
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& src);
