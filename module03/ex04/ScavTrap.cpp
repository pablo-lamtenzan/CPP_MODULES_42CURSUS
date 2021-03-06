/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 03:41:16 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/29 17:58:57 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& n) : ClapTrap(100, 100, 50, 50, 1, n, 20, 15, 3) { std::cout << "New ScavTrap " << name << " has been created!"  << std::endl; }

ScavTrap::ScavTrap()
{ ClapTrap Clap; std::cout << "An unitialised ScavTrap has been created!" << std::endl; }

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src.HitPoints, src.MaxHitPoints, src.EnergyPoints, src.MaxEnergyPoints, src.Level, src.name, src.MeleeAttackDamage, src.RangedAttackDamage, src.ArmorDamageReduction)
{ std::cout << "New ScavTrap " << src.name << " has been created by copy constructor!" << std::endl; }

ScavTrap::~ScavTrap() { std::cout << "A ScavTrap has been destroyed!" << std::endl; }

ScavTrap&	ScavTrap::operator=(const ScavTrap& src)
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

void		ScavTrap::challengeNewcomer()
{
    static const char*const challenges[] = {
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