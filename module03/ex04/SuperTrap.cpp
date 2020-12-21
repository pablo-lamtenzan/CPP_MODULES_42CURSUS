/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:27:33 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 05:42:07 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string& n)
{
	HitPoints = 100;
	MaxHitPoints = 100;
	EnergyPoints = 120;
	MaxEnergyPoints = 120;
	Level = 1;
	name = n;
	MeleeAttackDamage = 60;
	RangedAttackDamage = 20;
	ArmorDamageReduction = 5;
    std::cout << "A new SuperTrap " << name << " has been created!" << std::endl;
}

SuperTrap::SuperTrap() { std::cout << "An empty SuperTrap has been created!" << std::endl; }

SuperTrap::SuperTrap(const SuperTrap& src)
{
	if (this != &src)
		*this = src;
    std::cout << "A new SuperTrap " << name << " has been created by copy!" << std::endl;
}

SuperTrap&	SuperTrap::operator=(const SuperTrap &src)
{
	if (this != &src)
    {
        HitPoints = src.HitPoints;
        MaxHitPoints = src.MaxHitPoints;
        EnergyPoints = src.EnergyPoints;
        MaxEnergyPoints = src.MaxEnergyPoints;
        Level = src.Level;
        name = src.name;
        MeleeAttackDamage = src.MeleeAttackDamage;
        RangedAttackDamage = src.RangedAttackDamage;
        ArmorDamageReduction = src.ArmorDamageReduction;
    }
    return (*this);
}

SuperTrap::~SuperTrap() { std::cout << "SuperTrap " << name << " has been destroyed" << std::endl; }

void		SuperTrap::meleeAttack(const std::string &target) { NinjaTrap::meleeAttack(target); }
void		SuperTrap::rangedAttack(const std::string &target) { FragTrap::rangedAttack(target); }