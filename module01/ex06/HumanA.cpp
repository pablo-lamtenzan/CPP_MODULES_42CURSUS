/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:10:17 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 17:19:45 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) :
    __name(name)
{
    this->__weapon = &weapon;
}

HumanA::HumanA(std::string name) : __name(name), __weapon(NULL)
{

}

HumanA::~HumanA()
{
    
}

void
HumanA::attack()
{
    std::cout << this->getName() << " attacks with his " << this->__weapon->getType() << std::endl;
}

void
HumanA::setWeapon(Weapon &newWeapon)
{
    this->__weapon = &newWeapon;
}

std::string
HumanA::getName() const
{
    return (this->__name);
}