/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 08:56:37 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/24 17:38:53 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{ 
	public :

    RobotomyRequestForm(const std::string& t);
    RobotomyRequestForm(const RobotomyRequestForm& src);
    ~RobotomyRequestForm();
    RobotomyRequestForm&	operator=(const RobotomyRequestForm& src);
    void					execute(Bureaucrat const& executor) const;
};

#endif