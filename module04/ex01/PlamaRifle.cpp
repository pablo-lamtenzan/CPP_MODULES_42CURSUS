/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlamaRifle.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:04:55 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 02:20:06 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

// Constructors

PlasmaRifle::PlasmaRifle()
{
    this->__name = "Plasma Rifle";
    this->APCost = 21;
    this->Damage = 5;
    return ;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src)
{
    *this = src;
}

// Destructors

PlasmaRifle::~PlasmaRifle()
{
    return ;
}

// Operators

PlasmaRifle
&PlasmaRifle::operator= (const PlasmaRifle &src)
{
    if (this != &src)
    {
        this->__name = src.__name;
        this->APCost = src.APCost;
        this->Damage = src.Damage;
    }
    return (*this);
}

// Methods

void
PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *\n";
    return ;
}
