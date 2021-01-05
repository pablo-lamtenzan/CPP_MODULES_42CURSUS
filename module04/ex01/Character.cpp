/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:57:40 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 05:27:53 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const& n) : weapon(NULL), ap(40), name(n) { std::cout << "A new Character has been created!" << std::endl; }

Character::Character(const Character& src)
{
	std::cout << "A new Character has been created!" << std::endl;
	operator=(src);
}

Character::~Character() { std::cout << "A new Character has been destroyed!" << std::endl; }

Character&	Character::operator=(const Character& src)
{
    if (this != &src)
    {
        name = src.name;
        weapon = src.weapon;
        ap = src.ap;
    }
    return (*this);
}

std::ostream&	operator<<(std::ostream& out, const Character& src)
{
    if (src.getWeapon())
        return (out << src.getName() << " has " << src.getAP() << " AP and wields a " << src.getWeapon()->getName() << std::endl);
    return (out << src.getName() << " has " << src.getAP() << " AP and is unarmed" << std::endl);
}

void			Character::recoverAP() { ap += ap <= 30 && ap >= 0 ? 10 : 0; }
void			Character::equip(AWeapon* w) { weapon = w; }

void			Character::attack(Enemy* enemy)
{
	long  tmp;

	if (!weapon || !enemy)
		return ;

	tmp = ap - weapon->getAPCost();
	ap = tmp > 0 ? tmp : 0;

    std::cout << name << " attacks " << enemy->getType() << " with a " << weapon->getName() << " (Using " << weapon->getAPCost() << " ap!)" << std::endl;
	weapon->attack();
	enemy->takeDamage(weapon->getDamage());

    if (!enemy->getHP())
        delete enemy;
}

int					Character::getAP() const { return (ap); }
AWeapon*			Character::getWeapon() const { return (weapon); }
const std::string&	Character::getName() const { return (name); }
