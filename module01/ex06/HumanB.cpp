/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:19:54 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 17:20:15 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon weapon) :
    __name(name)
{
    this->__weapon = &weapon;
}

HumanB::HumanB(std::string name) : __name(name), __weapon(NULL)
{

}

HumanB::~HumanB()
{
    
}

void
HumanB::attack()
{
    std::cout << this->getName() << " attacks with his " << this->__weapon->getType() << std::endl;
}

void
HumanB::setWeapon(Weapon &newWeapon)
{
    this->__weapon = &newWeapon;
}

std::string
HumanB::getName() const
{
    return (this->__name);
}