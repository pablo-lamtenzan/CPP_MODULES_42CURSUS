/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 09:59:09 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/06 10:29:39 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"

class Intern
{
    protected :

    typedef struct          s_intern
    {
        std::string         type;
        Form                *(*make)(std::string target);
    }                       t_intern;

    public :

    // Constructors
    Intern();
    Intern(const Intern &src);

    // Destructors
    ~Intern();

    // Operators
    Intern &operator= (const Intern &src);

    // Shared Methods
    Form *makeForm(std::string type, std::string target);
};

#endif