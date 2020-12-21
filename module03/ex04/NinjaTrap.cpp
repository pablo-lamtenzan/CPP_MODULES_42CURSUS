/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:10:55 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 04:53:15 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const std::string& n)
{
	HitPoints = 60;
	MaxEnergyPoints = 60;
	EnergyPoints = 120;
	MaxEnergyPoints = 120;
	Level = 1;
	name = n;
	MeleeAttackDamage = 60;
	RangedAttackDamage = 5;
	ArmorDamageReduction = 0;
    std::cout << "New NinjaTrap " << name << " has been created!" << std::endl;
}

NinjaTrap::NinjaTrap() { }

NinjaTrap::NinjaTrap(const NinjaTrap &src)
{
    if (this != &src)
		*this = src;
    std::cout << "New NinjaTrap " << name << " has been created by copy!" << std::endl;
}

NinjaTrap::~NinjaTrap() { std::cout << "A NinjaTrap has been destroyed!" << std::endl; }

NinjaTrap&	NinjaTrap::operator= (const NinjaTrap &src)
{
        if (this != &src)
    {
        HitPoints = src.HitPoints;
        MaxHitPoints = MaxHitPoints;
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

void		NinjaTrap::rangedAttack(std::string const& target) { std::cout << "NINJ4-TP {" << name << "} attacks {" << target << "} at range, causing {" << RangedAttackDamage << "} points of damage !" << std::endl; }
void		NinjaTrap::meleeAttack(std::string const &target) { std::cout << "NINJ4-TP {" << name << "} attacks {" << target << "} at melee, causing {" << MeleeAttackDamage << "} points of damage !" << std::endl; }
void		NinjaTrap::ninjaShoebox(const NinjaTrap& target) { std::cout << "NinjaTrap uses this special Shoebox against:" << target.getName() << "!!" << std::endl; }
void		NinjaTrap::ninjaShoebox(const ScavTrap& target) { std::cout << "NinjaTrap uses this special Shoebox against:" << target.getName() << "!!" << std::endl; }
void		NinjaTrap::ninjaShoebox(const FragTrap& target) { std::cout << "NinjaTrap uses this special Shoebox against:" << target.getName() << "!!" << std::endl; }
void		NinjaTrap::ninjaShoebox(const ClapTrap& target) { std::cout << "NinjaTrap uses this special Shoebox against:" << target.getName() << "!!" << std::endl; }