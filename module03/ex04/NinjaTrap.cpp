/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:10:55 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 21:53:14 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
{
    ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0);
    this->__HitPoints = 60;
    this->__MaxHitPoints = 60;
    this->__EnergyPoints = 120;
    this->__MaxEnergyPoints = 120;
    this->__Level = 1;
    this->__name = name;
    this->__MeleeAttackDamage = 60;
    this->__RangedAttackDamage = 5;
    this->__ArmorDamageReduction = 0;
    std::cout << "NinjaTrap Unleash!!!" << std::endl;
}

NinjaTrap::NinjaTrap()
{
    
}

NinjaTrap::NinjaTrap(const NinjaTrap &src)
{
    //ClapTrap(src);
    std::cout << "NinjaTrap Unleash!!!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "End of NinjaTrap {" << this->__name << "} ..." << std::endl;
}

NinjaTrap
&NinjaTrap::operator= (const NinjaTrap &src)
{
        if (this != &src)
    {
        this->__HitPoints = src.__HitPoints;
        this->__MaxHitPoints = src.__MaxHitPoints;
        this->__EnergyPoints = src.__EnergyPoints;
        this->__MaxEnergyPoints = src.__MaxEnergyPoints;
        this->__Level = src.__Level;
        this->__name = src.__name;
        this->__MeleeAttackDamage = src.__MeleeAttackDamage;
        this->__RangedAttackDamage = src.__RangedAttackDamage;
        this->__ArmorDamageReduction = src.__ArmorDamageReduction;
    }
    return (*this);
}

void
NinjaTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP {" << this->__name << "} attacks {" << target << "} at range, causing {" << this->__RangedAttackDamage << "} points of damage !" << std::endl;
    //EnergyPoints = (EnergyPoints - 15) > 0 ? EnergyPoints - 15 : 0;
}

void
NinjaTrap::meleeAttack(std::string const &target)
{
    std::cout << "FR4G-TP {" << this->__name << "} attacks {" << target << "} at melee, causing {" << this->__MeleeAttackDamage << "} points of damage !" << std::endl;
    //EnergyPoints = (EnergyPoints - 10) > 0 ? EnergyPoints - 10 : 0;
}

void
NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
    std::cout << "NinjaTrap uses this special Shoebox against:" << target.getName() << "!!" << std::endl;
}

void
NinjaTrap::ninjaShoebox(ScavTrap &target)
{
    std::cout << "NinjaTrap uses this special Shoebox against:" << target.getName() << "!!" << std::endl;
}

void
NinjaTrap::ninjaShoebox(FragTrap &target)
{
    std::cout << "NinjaTrap uses this special Shoebox against:" << target.getName() << "!!" << std::endl;
}

void
NinjaTrap::ninjaShoebox(ClapTrap &target)
{
    std::cout << "NinjaTrap uses this special Shoebox against:" << target.getName() << "!!" << std::endl;
}