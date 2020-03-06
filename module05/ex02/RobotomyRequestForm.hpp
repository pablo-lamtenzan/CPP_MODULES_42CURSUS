/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 08:56:37 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/06 09:45:31 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
    private :

    public :

    // Constructors
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &src);

    // Destructors
    ~RobotomyRequestForm();

    // Operators
    RobotomyRequestForm &operator= (const RobotomyRequestForm &src);

    // Shared Methods
    void __execute(Bureaucrat const &executor) const;
};

#endif