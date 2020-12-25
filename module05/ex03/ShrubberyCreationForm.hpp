/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 07:35:31 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/24 17:43:54 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

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

#endif