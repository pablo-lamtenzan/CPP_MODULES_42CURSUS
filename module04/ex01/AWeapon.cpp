/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 06:53:30 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 02:15:09 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWaepon.hpp"

// Constructors

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
    this->__name = name;
    this->APCost = apcost;
    this->Damage = Damage;
    return ;
}

AWeapon::AWeapon()
{
    this->__name = "Default";
    this->APCost = 25;
    this->Damage = 25;
    return ;
}

AWeapon::AWeapon(const AWeapon &src)
{
    *this = src;
    return ;
}

// Destructors

AWeapon::~AWeapon()
{
    return ;
}

// Operators

AWeapon
&AWeapon::operator=(const AWeapon &src)
{
    if (this != &src)
    {
        this->__name = src.__name;
        this->Damage = src.Damage;
        this->APCost = src.APCost;
        this->sound = src.sound;
    }
    return (*this);
}

// Methods :

const std::string
AWeapon::getName() const
{
    return (this->__name);
}

int
AWeapon::getAPCost() const
{
    return (this->APCost);
}

int
AWeapon::getDamage() const
{
    return (this->Damage);
}
