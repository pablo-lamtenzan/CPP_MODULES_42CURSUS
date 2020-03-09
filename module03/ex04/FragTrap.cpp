/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 03:03:57 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 21:20:05 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5);
        this->__HitPoints = 100;
    this->__MaxHitPoints = 100;
    this->__EnergyPoints = 100;
    this->__MaxEnergyPoints = 100;
    this->__Level = 1;
    this->__name = name;
    this->__MeleeAttackDamage = 30;
    this->__RangedAttackDamage = 20;
    this->__ArmorDamageReduction = 5;
    std::cout << "FragTrap name: \"" << name << "\" has been created!\n" << "Hit Points: " << this->__HitPoints << "\nMax Hit Points: " << this->__MaxHitPoints << "\nEnergy Points: " << this->__EnergyPoints << "\nMax Energy Points: " << this->__MaxEnergyPoints << "\nLevel: " << this->__Level << "\nMelee Attack Damage: " << this->__MeleeAttackDamage << "\nRanged Attack Damage: " << this->__RangedAttackDamage << "\nArmor Damage Reduction: " << this->__ArmorDamageReduction << '\n';
}

FragTrap::FragTrap()
{
    
}

FragTrap::FragTrap(const FragTrap &src)
{
    ClapTrap(100, 100, 100, 100, 1, src.__name, 20, 15, 3);
    std::cout << "FragTrap name: \"" << src.__name << "\" has been created!\n" << "Hit Points: " << src.__HitPoints << "\nMax Hit Points: " << this->__MaxHitPoints << "\nEnergy Points: " << src.__EnergyPoints << "\nMax Energy Points: " << src.__MaxEnergyPoints << "\nLevel: " << src.__Level << "\nMelee Attack Damage: " << src.__MeleeAttackDamage << "\nRanged Attack Damage: " << src.__RangedAttackDamage << "\nArmor Damage Reduction: " << src.__ArmorDamageReduction << '\n';
}

FragTrap::~FragTrap()
{
    
}

FragTrap
&FragTrap::operator= (const FragTrap &src)
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
FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP <" << this->__name << "> attacks <" << target << "> at range, causing <" << this->__RangedAttackDamage << "> points of damage !" << std::endl;
    //EnergyPoints = (EnergyPoints - 15) > 0 ? EnergyPoints - 15 : 0;
}

void
FragTrap::meleeAttack(std::string const &target)
{
    std::cout << "FR4G-TP <" << this->__name << "> attacks <" << target << "> at melee, causing <" << this->__MeleeAttackDamage << "> points of damage !" << std::endl;
    //EnergyPoints = (EnergyPoints - 10) > 0 ? EnergyPoints - 10 : 0;
}

void
FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    if (this->__EnergyPoints >= 25)
    {
        const char *attacks[] = {"Sword Attack!\n", "Hummer Attack!\n", "Physical Attack!\n", "Gun Attack!\n", "Arrow Attack!\n", NULL};
                
        int random = rand() % 5;
        const char *attack = attacks[random];

        int i = -1;
        while (strcmp(attacks[++i], attack));

        std::cout << attack;
        i > 2 ? rangedAttack(target) : meleeAttack(target);
        this->__EnergyPoints -= 25;
    }
    else
        std::cout << "FRAG-TP <" << this->__name << "> has not enought energy for vaulthunder (Energy is " << this->__EnergyPoints << ")." << std::endl;   
}

int
FragTrap::getHitPoints() const
{
    return (this->__HitPoints);
}