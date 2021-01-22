/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PresidentialPardonForm.hpp                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: plamtenz <plamtenz@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/06 09:11:11 by plamtenz     #+#   ##    ##    #+#       */
/*   Updated: 2021/01/22 15:46:05 by plamtenz    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

# pragma once

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
