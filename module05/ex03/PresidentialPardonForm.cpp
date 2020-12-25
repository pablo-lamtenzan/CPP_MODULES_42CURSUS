/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 09:16:03 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/24 18:16:42 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("presidential pardon", 25, 5, target) { }
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : Form(src.getName(), src.getGradeSign(), src.getGradeExec(), src.getTarget()) { }
PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	Form::operator=(src);
    return (*this);
}

void					PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > getGradeExec())
		throw GradeToolowException();
	else if (!isSigned())
		throw GradeNotSignedExection();
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
