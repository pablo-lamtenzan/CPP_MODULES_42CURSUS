/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 03:41:16 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 21:23:13 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    ClapTrap(100, 100, 100, 100, 1, name, 20, 15, 3);
    this->__HitPoints = 100;
    this->__MaxHitPoints = 100;
    this->__EnergyPoints = 100;
    this->__MaxEnergyPoints = 100;
    this->__Level = 1;
    this->__name = name;
    this->__MeleeAttackDamage = 20;
    this->__RangedAttackDamage = 15;
    this->__ArmorDamageReduction = 3;
    std::cout << "Hi im ur new Scavtrap, [" << name << "] and i ve been created!" << std::endl;
}

ScavTrap::ScavTrap()
{
    
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
    ClapTrap(100, 100, 100, 100, 1, src.__name, 20, 15, 3);
    std::cout << "Hi im ur new Scavtrap, [" << src.__name << "] and i ve been created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    
}

ScavTrap
&ScavTrap::operator= (const ScavTrap &src)
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
ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP [" << this->__name << "] attacks [" << target << "] at range, causing [" << this->__RangedAttackDamage << "] points of damage !" << std::endl;
    //EnergyPoints = (EnergyPoints - 15) > 0 ? EnergyPoints - 15 : 0;
}

void
ScavTrap::meleeAttack(std::string const &target)
    {
    std::cout << "FR4G-TP [" << this->__name << "] attacks [" << target << "] at melee, causing [" << this->__MeleeAttackDamage << "] points of damage !" << std::endl;
    //EnergyPoints = (EnergyPoints - 10) > 0 ? EnergyPoints - 10 : 0;
    }

void
ScavTrap::challengeNewcomer()
{
    const char *challenges[] = {"Imagine Challenges!\n", "Imagine You Imagine Challenges!\n", "Imagine You Challenging You To Imagine To Chalenging You To Imagine Challenges!\n", "Don't think about imagine challenges!\n", NULL};
        
    int random = rand() % 4;

    std::cout << "Hey dude!, This is your challenge: " << challenges[random];
}