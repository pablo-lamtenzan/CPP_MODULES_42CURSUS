/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 06:53:30 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 04:24:12 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const& n, int ap, int dmg)  : name(n), damage(dmg), ap_cost(ap) { std::cout << "AWeapon contructed!" << std::endl; }

AWeapon::AWeapon(const AWeapon& src)
{
	std::cout << "AWeapon contructed by copy!" << std::endl;
    operator=(src);
}

AWeapon::~AWeapon() { std::cout << "AWeapon destroyed!" << std::endl; }

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
