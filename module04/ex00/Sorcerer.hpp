/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:45:14 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 08:41:25 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
    private :

	Sorcerer();
    std::string name;
    std::string	title;

    public :
    
    Sorcerer(const Sorcerer& src);
    Sorcerer(const std::string& n, const std::string& t);    
    ~Sorcerer();    
    Sorcerer &operator=(const Sorcerer& src);
    void introduce_himself();
    void polymorph(Victim const& target) const;
    const std::string& get_name() const;
    const std::string& get_title() const;
};

std::ostream& operator<< (std::ostream& out, const Sorcerer& src);

#endif
