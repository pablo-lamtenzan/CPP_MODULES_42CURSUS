/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 09:01:25 by plamtenz          #+#    #+#             */
/*   Updated: 2021/02/23 13:01:03 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("robotomy request", 72, 45, target) { }
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : Form(src.getName(), src.getGradeSign(), src.getGradeExec(), src.getTarget()) { }
RobotomyRequestForm::~RobotomyRequestForm() { }

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	Form::operator=(src);
    return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > getGradeExec())
		throw GradeToolowException();
	else if (!isSigned())
		throw GradeNotSignedExection();
    if (rand() % 2 == 0)
        std::cout << '<' << this->getTarget() << "> has been robotomized successfully!" << std::endl;
    else
        std::cout << '<' << this->getTarget() << "> failed to be robotomized!" << std::endl;
}
