/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ShrubberyCreationForm.hpp                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: plamtenz <plamtenz@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/06 07:35:31 by plamtenz     #+#   ##    ##    #+#       */
/*   Updated: 2021/01/22 15:43:15 by plamtenz    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

# pragma once

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    public :

    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm& src);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& src);
    void					execute(Bureaucrat const& executor) const;
};
