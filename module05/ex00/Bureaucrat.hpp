/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 08:11:52 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/06 07:28:58 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

#define HIGHT Bureaucrat::GradeTooHighException
#define LOW Bureaucrat::GradeToolowException

class Bureaucrat
{
    private :

    std::string __name;
    int __grade;

    public :

    // Constructors
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &src);

    // Destructors
    ~Bureaucrat();

    // Operators
    Bureaucrat &operator= (const Bureaucrat &src);

    // Shared Methods
    std::string getName() const;
    int getGrade() const;
    void CheckExeption(int grade);
    void IncrementGrade();
    void DecrementGrade();

    // Shared Sub-Classes

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
        const char *what() const throw();
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
        const char *what()const throw();
    };
};

std::ostream &operator<< (std::ostream &out, Bureaucrat const &src);

#endif