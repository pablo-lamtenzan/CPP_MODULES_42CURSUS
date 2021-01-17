/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:27:33 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/29 19:35:34 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string& n) : ClapTrap(100, 100, 120, 120, 1, n, 60, 20, 5)
{ std::cout << "A new SuperTrap has been created!" << std::endl; }

SuperTrap::SuperTrap() { std::cout << "An empty SuperTrap has been created!" << std::endl; }

SuperTrap::SuperTrap(const SuperTrap& src) : ClapTrap(src.HitPoints, src.MaxHitPoints, src.EnergyPoints, src.MaxEnergyPoints, src.Level, src.name, src.MeleeAttackDamage, src.RangedAttackDamage, src.ArmorDamageReduction)
{ std::cout << "A new SuperTrap has been created by copy!" << std::endl; }

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