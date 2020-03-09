/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 04:31:08 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 21:45:43 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    
}

ClapTrap::ClapTrap(int HitPoints, int MaxHitPoints, int EnergyPoints,
    int MaxEnergyPoints, int Level, std::string name, 
    int MeleeAttackDamage, int RangedAttackDamage, int ArmorDamageReduction) :
    __HitPoints(HitPoints), __MaxHitPoints(HitPoints), __MaxEnergyPoints(EnergyPoints),
    __Level(Level), __name(name), __MeleeAttackDamage(MeleeAttackDamage),
    __RangedAttackDamage(RangedAttackDamage), __ArmorDamageReduction(ArmorDamageReduction)
{
    std::cout << "You have constructed ClapTrap <[" << name << "]> !" << std::endl << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) :
    __HitPoints(src.__HitPoints), __MaxHitPoints(src.__HitPoints), __MaxEnergyPoints(src.__EnergyPoints),
    __Level(src.__Level), __name(src.__name), __MeleeAttackDamage(src.__MeleeAttackDamage),
    __RangedAttackDamage(src.__RangedAttackDamage), __ArmorDamageReduction(src.__ArmorDamageReduction)
{
    std::cout << "You have constructed ClapTrap <[" << src.__name << "]> !" << std::endl << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap <[" << this->__name << "]> died young but happy" << std::endl;
}

ClapTrap
&ClapTrap::operator= (const ClapTrap &src)
{
    return (*this);
}

void
ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "FRAG-TP <" << this->__name << "> has been repared by <" << amount << "> hp!" << std::endl;
    this->__HitPoints = (this->__HitPoints + amount) <= this->__MaxHitPoints ? this->__HitPoints + amount : this->__MaxHitPoints;
}

void
ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "FR4G-TP <" << this->__name << "> has been atacked by <" << amount << "> hp!" << std::endl;
    this->__HitPoints = (this->__HitPoints - amount) + this->__ArmorDamageReduction > 0 ? (this->__HitPoints - amount) + this->__ArmorDamageReduction : 0;
    this->__HitPoints = this->__HitPoints < 0 ? 0 : (this->__HitPoints > this->__MaxHitPoints ? this->__MaxHitPoints : this->__HitPoints);
}

std::string
ClapTrap::getName() const
{
    return (this->__name);
}