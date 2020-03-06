/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 09:11:11 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/06 09:45:17 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private :

    public :

    // Constructors
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &src);

    // Destructors
    ~PresidentialPardonForm();

    // Operators
    PresidentialPardonForm &operator= (const PresidentialPardonForm &src);

    // Shared Methods
    void __execute(Bureaucrat const &executor) const;
};

#endif