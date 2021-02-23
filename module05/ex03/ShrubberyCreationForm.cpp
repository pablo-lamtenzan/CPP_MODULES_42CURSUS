/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 07:35:26 by plamtenz          #+#    #+#             */
/*   Updated: 2021/02/23 13:15:44 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("shrubbery creation", 145, 137, target) { }
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : Form(src.getName(), src.getGradeSign(), src.getGradeExec(), src.getTarget()) { }
ShrubberyCreationForm::~ShrubberyCreationForm() { }

ShrubberyCreationForm&	ShrubberyCreationForm::operator= (const ShrubberyCreationForm& src)
{
	Form::operator=(src);
    return (*this);
}

void					ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > getGradeExec())
		throw GradeToolowException();
	else if (!isSigned())
		throw GradeNotSignedExection();

	static const char AsciiTree[] = "                                                         .\n"
				 "                                              .         ;  \n"
				 "                 .              .              ;%     ;;   \n"
				 "                   ,           ,                :;%  %;   \n"
				 "                    :         ;                   :;%;'     .,   \n"
				 "           ,.        %;     %;            ;        %;'    ,;\n"
				 "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
				 "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
				 "               ;%;      %;        ;%;        % ;%;  ,%;'\n"
				 "                `%;.     ;%;     %;'         `;%%;.%;'\n"
				 "                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
				 "                    `:%;.  :;bd%;          %;@%;'\n"
				 "                      `@%:.  :;%.         ;@@%;'   \n"
				 "                        `@%.  `;@%.      ;@@%;         \n"
				 "                          `@%%. `@%%    ;@@%;        \n"
				 "                            ;@%. :@%%  %@@%;       \n"
				 "                              %@bd%%%bd%%:;     \n"
				 "                                #@%%%%%:;;\n"
				 "                                %@@%%%::;\n"
				 "                                %@@@%(o);  . '         \n"
				 "                                %@@@o%;:(.,'         \n"
				 "                            `.. %@@@o%::;         \n"
				 "                               `)@@@o%::;         \n"
				 "                                %@@(o)::;        \n"
				 "                               .%@@@@%::;         \n"
				 "                               ;%@@@@%::;.          \n"
				 "                              ;%@@@@%%:;;;. \n"
				 "                          ...;%@@@@@%%:;;;;,..    Gilo97";

    std::ofstream ifs;
	ifs.open(std::string(getTarget() + std::string("__shrubbery")).c_str());
    ifs << AsciiTree << std::endl;
    ifs.close();
}