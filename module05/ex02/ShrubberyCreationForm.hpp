/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 07:35:31 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/06 09:48:27 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private :

    public :

    // Constructors
    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);

    // Destructors
    ~ShrubberyCreationForm();

    // Operators
    ShrubberyCreationForm &operator= (const ShrubberyCreationForm &src);

    // Shared Methods
    void __execute(Bureaucrat const &executor) const;
};

#endif