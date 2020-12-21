/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 03:41:16 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 04:05:28 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& n) : HitPoints(100), MaxHitPoints(100), EnergyPoints(50),
    MaxEnergyPoints(50), Level(1), name(n), MeleeAttackDamage(20), RangedAttackDamage(15), ArmorDamageReduction(3), ptr((const void*const)this)
{ std::cout << "New ScavTrap " << name << " has been created!"  << std::endl; }

ScavTrap::ScavTrap() : HitPoints(0), MaxHitPoints(0), EnergyPoints(0),
    MaxEnergyPoints(0), Level(0), name("Undefined"), MeleeAttackDamage(0), RangedAttackDamage(0), ArmorDamageReduction(0), ptr((const void*const)this)
{ std::cout << "An unitialised ScavTrap has been created!" << std::endl; }

ScavTrap::ScavTrap(const ScavTrap& src) : ptr((const void*const)&src)
{
	std::cout << "New ScavTrap " << src.name << " has been created by copy constructor!" << std::endl;
    if (this != &src)
		*this = src;
}

ScavTrap::~ScavTrap() { std::cout << "A ScavTrap has been destroyed!" << std::endl; }

ScavTrap&	ScavTrap::operator= (const ScavTrap& src)
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

void		ScavTrap::rangedAttack(std::string const& target) { std::cout << "SCAV-TP <" << name << "> attacks <" << target << "> at range, causing <" << RangedAttackDamage << "> points of damage !" << std::endl; }
void		ScavTrap::meleeAttack(std::string const& target) { std::cout << "SCAV-TP <" << name << "> attacks <" << target << "> at melee, causing <" << MeleeAttackDamage << "> points of damage !" << std::endl; }

void		ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "SV4V-TP <" << name << "> has been atacked by <" << amount << "> hp!" << std::endl << "SC4V-TP " << name << " has shield <" << ArmorDamageReduction <<"> damage!" << std::endl;
    HitPoints = (HitPoints - amount) + ArmorDamageReduction > 0 ? (HitPoints - amount) + ArmorDamageReduction : 0;
    HitPoints = HitPoints < 0 ? 0 : (HitPoints > MaxHitPoints ? MaxHitPoints : HitPoints);
}
        
void		ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << "SV4V-TP <" << name << "> has been repared by <" << amount << "> hp!" << std::endl;
    HitPoints = (HitPoints + amount) <= MaxHitPoints ? HitPoints + amount : MaxHitPoints;
}

void		ScavTrap::challengeNewcomer()
{
    static const char*const challenges[] {
		"Imagine a challenge",
		"Having imagination to imagine challenges",
		"Do not think about imagine challenges",
		"Do not think about this sentence",
		"Do imagine you not imaginating you"
	};

	if (EnergyPoints >= 25)
	{
    	std::cout << "SC4V-TP " << name << " challenges you to: \"" << challenges[rand() % (sizeof(challenges) / sizeof(*challenges))] << "\"" << std::endl;
		EnergyPoints -= 25;
	}
	else
		std::cout << "SC4V-TRAP <" << name << "> has not enought energy points for execute challengeNewcomer" << " (Energy is " << EnergyPoints << ")." << std::endl;   
}