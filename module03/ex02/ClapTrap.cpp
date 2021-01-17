/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 04:31:08 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/29 18:14:08 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : itself(this) { std::cout << "An new CL4P-TRAP has been created!" << std::endl; }

ClapTrap::ClapTrap(ssize_t hp, ssize_t max_hp, ssize_t ep, ssize_t max_ep, ssize_t lv, const std::string& n, ssize_t m_ad, ssize_t r_ad, ssize_t armor) : HitPoints(hp), MaxHitPoints(max_hp), EnergyPoints(ep), MaxEnergyPoints(max_ep), Level(lv), name(n), MeleeAttackDamage(m_ad), RangedAttackDamage(r_ad), ArmorDamageReduction(armor)
{ std::cout << "A new CL4P-TRAP " << name << " has been created by copy!" << std::endl; }

ClapTrap::ClapTrap(const ClapTrap &src)
{
	if (this != &src)
		*this = src;
	std::cout << "A new CL4P-TRAP " << name << " has been created by copy!" << std::endl;
}

ClapTrap::~ClapTrap() { std::cout << "A ClapTrap " << name << " has been destroyed!" << std::endl; }

ClapTrap&		ClapTrap::operator= (const ClapTrap &src)
{
	// unused
	(void)src;
    return (*this);
}

void			ClapTrap::beRepaired(unsigned int amount)
{

    std::cout << "FR4G <" << name << "> has been repared by <" << amount << "> hp!" << std::endl;
    HitPoints = (HitPoints + amount) <= MaxHitPoints ? HitPoints + amount : MaxHitPoints;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "FR4G <" << name << "> has been atacked by <" << amount << "> hp!" << std::endl;
    HitPoints = (HitPoints - amount) + ArmorDamageReduction > 0 ? (HitPoints - amount) + ArmorDamageReduction : 0;
    HitPoints = HitPoints < 0 ? 0 : (HitPoints > MaxHitPoints ? MaxHitPoints : HitPoints);
}

const std::string&	ClapTrap::getName() const { return (name); }
ssize_t				ClapTrap::get_hp() const { return (HitPoints); }