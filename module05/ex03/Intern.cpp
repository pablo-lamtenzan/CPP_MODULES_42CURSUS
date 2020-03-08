/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 10:12:48 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/06 10:37:22 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// Constructors

Intern::Intern()
{

}

Intern::Intern(const Intern &src)
{

}

// Destructors

Intern::~Intern()
{

}

// Operators

Intern
&Intern::operator= (const Intern &src)
{

}

// Methods

static Form
*makePresidential(std::string target)
{
    return (new PresidentialPardonForm(target));
}

static Form
*makeRobotomy(std::string target)
{
    return (new RobotomyRequestForm(target));
}

static Form
*makeShrubbery(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form
*Intern::makeForm(std::string type, std::string target)
{
    t_intern Forms[3] = {
        {"shrubbery creation", makeShrubbery},
        {"robotomy request", makeRobotomy},
        {"presidential pardon", makePresidential}
    };
    int i = -1;
    while (++i < 3)
    {
        if (Forms[i].type == type)
        {
            std::cout << "Intern creates <" << type << '>' << std::endl;
            return (Forms[i].make(target));
        }
    }
    std::cout << "Unknown form type: <" << type << "> for intern" << std::endl;
    return (NULL);
}