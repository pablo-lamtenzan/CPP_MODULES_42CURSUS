/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Intern.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: plamtenz <plamtenz@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/06 09:59:09 by plamtenz     #+#   ##    ##    #+#       */
/*   Updated: 2021/01/22 15:45:46 by plamtenz    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

# pragma once

#include "Form.hpp"

class Intern
{
    public :

    Intern();
    Intern(const Intern& src);
    ~Intern();
    Intern&	operator=(const Intern& src);
    Form*	makeForm(const std::string& type, const std::string& target);
};
