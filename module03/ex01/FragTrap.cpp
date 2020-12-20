/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 03:03:57 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 12:50:58 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& n) : HitPoints(100), MaxHitPoints(100),
   EnergyPoints(100), MaxEnergyPoints(100), Level(1), name(n), MeleeAttackDamage(30),
    RangedAttackDamage(20), ArmorDamageReduction(5), ptr((const void*const)this)
{ std::cout << "New FragTrap " << name << " has been created!" << std::endl; }

FragTrap::FragTrap() : HitPoints(0), MaxHitPoints(0),
   EnergyPoints(0), MaxEnergyPoints(0), Level(0), name("Undefined"), MeleeAttackDamage(0),
    RangedAttackDamage(0), ArmorDamageReduction(0), ptr((const void*const)this)
{ std::cout << "An unitialised TragTrap has been created!" << std::endl; }

FragTrap::FragTrap(const FragTrap& src) : ptr((const void*const)&src)
{
	std::cout << "New FragTrap " << src.name << " has been created by copy constructor!" << std::endl;
	if (this != &src)
		*this = src;
}
FragTrap::~FragTrap() { std::cout << "A FragTrap has been destroyed!" << std::endl; }

FragTrap&	FragTrap::operator=(const FragTrap &src)
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

void		FragTrap::rangedAttack(std::string const &target) { std::cout << "FR4G-TP <" << name << "> attacks <" << target << "> at range, causing <" << RangedAttackDamage << "> points of damage !" << std::endl; }
void		FragTrap::meleeAttack(std::string const &target) { std::cout << "FR4G-TP <" << name << "> attacks <" << target << "> at melee, causing <" << MeleeAttackDamage << "> points of damage !" << std::endl; }

void		FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "FR4G-TP <" << name << "> has been atacked by <" << amount << "> hp!" << std::endl << "FR4G-TP " << name << " has shield <" << ArmorDamageReduction <<"> damage!" << std::endl;
    HitPoints = (HitPoints - amount) + ArmorDamageReduction > 0 ? (HitPoints - amount) + ArmorDamageReduction : 0;
    HitPoints = HitPoints < 0 ? 0 : (HitPoints > MaxHitPoints ? MaxHitPoints : HitPoints);
}
        
void		FragTrap::beRepaired(unsigned int amount)
{
    std::cout << "FRAG-TP <" << name << "> has been repared by <" << amount << "> hp!" << std::endl;
    HitPoints = (HitPoints + amount) <= MaxHitPoints ? HitPoints + amount : MaxHitPoints;
}

void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	static const char*const attacks[] {
		"Normal attack",
		"Heavy attack",
		"Surprise attack",
		"Fast attack",
		"Special attack"
	};

    if (EnergyPoints >= 25)
    {
		int r;
		const std::string attack(attacks[(r = rand() % (sizeof(attacks) / sizeof(*attacks)))]);
        std::cout << "[" << attack << "] ";
        r % 2 ? rangedAttack(target) : meleeAttack(target);
		EnergyPoints -= 25;
    }
    else
        std::cout << "FRAG-TRAP <" << name << "> has not enought energy points for execute vaulthunder to <" << target << "> (Energy is " << EnergyPoints << ")." << std::endl;   
}

ssize_t			FragTrap::get_hp() const { return(HitPoints); }