/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 09:01:25 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/06 09:45:27 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Constructors

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("Robotomy", 72, 45, target)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
    
}

// Destructors

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

// Operators

RobotomyRequestForm
&RobotomyRequestForm::operator= (const RobotomyRequestForm &src)
{
    return (*this);
}

// Methods

void
RobotomyRequestForm::__execute(Bureaucrat const &executor) const
{
    if (rand() % 2 == 0)
        std::cout << '<' << this->getTarget() << "> has been robotomized successfully" << std::endl;
    else
        std::cout << '<' << this->getTarget() << "> failed to be robotomized :(" << std::endl;
}
