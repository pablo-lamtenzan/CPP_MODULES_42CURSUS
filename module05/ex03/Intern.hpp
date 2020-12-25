/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 09:59:09 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/25 11:38:55 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

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

#endif