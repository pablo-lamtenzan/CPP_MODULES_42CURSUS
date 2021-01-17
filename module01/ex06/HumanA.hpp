/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:03:12 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/23 08:32:33 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private :

	// mutable address, a pointer is necesarry
    Weapon		*weapon;
    std::string	name;
    
    public :
    
    HumanA(const std::string& n, Weapon &w);
    HumanA(const std::string& n);
    ~HumanA();
    void 				attack();
    void 				setWeapon(Weapon& w);
    const std::string&	getName() const;
};
#endif