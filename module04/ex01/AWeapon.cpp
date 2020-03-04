/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 06:53:30 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 06:59:39 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWaepon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
    this->name = name;
    this->APCost = apcost;
    this->Damage = Damage;
    this->sound = "zzz";
}

AWeapon::~AWeapon()
{
    
}

AWeapon::AWeapon(const AWeapon&)
{
    
}

