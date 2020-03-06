/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 07:35:26 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/06 09:45:34 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructors

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("Shruberry", 145, 137, target)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
    
}

// Destructors

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

// Operators

ShrubberyCreationForm
&ShrubberyCreationForm::operator= (const ShrubberyCreationForm &src)
{
    return (*this);
}

// Methods

const std::string AsciiTree = "here it have to be an ascii tree but im lazy\n";

void
ShrubberyCreationForm::__execute(Bureaucrat const &executor) const
{
    std::ofstream file(this->getTarget() + "__shrubbery");
    file << AsciiTree << std::endl;
    file.close();
}