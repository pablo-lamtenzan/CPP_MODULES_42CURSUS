/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:57:40 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 03:23:53 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


// Constructors

Character::Character(std::string const &name)
{
    this->__name = name;
    this->__weapon = NULL;
    this->__ap = 40;
    return ;
}

Character::Character()
{
    this->__name = "default";
    this->__weapon = NULL;
    this->__ap = 40;
    return ;
}

Character::Character(const Character &src)
{
    *this = src;
    return ;
}

// Destructors

Character::~Character()
{
    return ;
}

// Operators

Character
&Character::operator= (const Character &src)
{
    if (this != &src)
    {
        this->__name = src.__name;
        this->__weapon = src.__weapon;
        this->__ap = src.__ap;
    }
    return (*this);
}

std::ostream
&operator<< (std::ostream &out, const Character &src)
{
    if (src.getWeapon())
    {
        out << src.getName() << " has " << src.getAP() << " AP and wields a " << src.getWeapon()->getName() << '\n';
        return (out);
    }
    out << src.getName() << " has " << src.getAP() << " AP and is unarmed\n";
    return (out);
}

// Methods

void
Character::recoverAP()
{
    if (this->__ap <= 30 && this->__ap >= 0)
        this->__ap += 10;
    return ;
}

void
Character::equip(AWeapon *weapon)
{
    this->__weapon = weapon;
}

void
Character::attack(Enemy *enemy)
{
    if (!this->__weapon || !enemy)
        return ;
    this->__ap = this->__ap - this->__weapon->getAPCost() > 0 ? this->__ap - this->__weapon->getAPCost() : 0;
    std::cout << this->__name << "attacks " << enemy->getType() << " with a " << this->__weapon->getName() << '\n';
    enemy->__hp = enemy->__hp - this->__weapon->getDamage() > 0 ? enemy->__hp - this->__weapon->getDamage() : 0;
    if (!enemy->__hp)
        delete enemy;
}

int
Character::getAP() const
{
    return (this->__ap);
}

AWeapon
*Character::getWeapon() const
{
    return (this->__weapon);
}

const std::string
Character::getName() const
{
    return (this->__name);
}
