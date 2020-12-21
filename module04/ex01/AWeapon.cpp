/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 06:53:30 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 10:38:31 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const& n, int ap, int dmg)  : name(n) { ap_cost = ap; damage = dmg;}

AWeapon::AWeapon(const AWeapon& src)
{
	if (this != &src)
    	*this = src;
}

AWeapon::~AWeapon() {}

AWeapon&	AWeapon::operator=(const AWeapon& src)
{
    if (this != &src)
    {
        name = src.name;
        damage = src.damage;
        ap_cost = src.ap_cost;
    }
    return (*this);
}

const std::string&	AWeapon::getName() const { return (name); }
int					AWeapon::getAPCost() const { return (ap_cost); }
int					AWeapon::getDamage() const { return (damage); }
