/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:19:15 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 06:58:58 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private :

	// mutable address, a pointer is necesarry
    Weapon		*weapon;
    std::string	name;
    
    public :
    
    HumanB(const std::string& n, Weapon& w);
    HumanB(const std::string& n);
    ~HumanB();
    void attack();
    void setWeapon(Weapon& w);
    const std::string getName() const;
};

#endif
