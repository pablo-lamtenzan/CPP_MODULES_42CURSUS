/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 09:16:03 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/06 09:45:22 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Constructors

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("Presidential", 25, 5, target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{

}

// Destructors

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

// Operators

PresidentialPardonForm
&PresidentialPardonForm::operator= (const PresidentialPardonForm &src)
{
    return (*this);
}

// Methods

void
PresidentialPardonForm::__execute(Bureaucrat const &executor) const
{
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
    return ;
}