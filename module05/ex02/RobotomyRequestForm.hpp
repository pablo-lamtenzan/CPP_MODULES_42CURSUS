/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RobotomyRequestForm.hpp                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: plamtenz <plamtenz@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/06 08:56:37 by plamtenz     #+#   ##    ##    #+#       */
/*   Updated: 2021/01/22 15:42:48 by plamtenz    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

# pragma once

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
