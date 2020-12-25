/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 09:11:11 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/24 17:38:45 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{

    public :

    PresidentialPardonForm(const std::string& t);
    PresidentialPardonForm(const PresidentialPardonForm& src);
    ~PresidentialPardonForm();
    PresidentialPardonForm&		operator=(const PresidentialPardonForm& src);
    void						execute(Bureaucrat const& executor) const;
};

#endif