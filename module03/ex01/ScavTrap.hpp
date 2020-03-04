/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 03:37:56 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 04:05:39 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <random>

class Scavtrap
{
    public :

    Scavtrap(std::string name);
    int HitPoints;
    int MaxHitPoints;
    int EnergyPoints;
    int MaxEnergyPoints;
    int Level;
    std::string name;
    int MeleeAttackDamage;
    int RangedAttackDamage;
    int ArmorDamageReduction;
    const void *ptr;
    
    void rangedAttack(std::string const &target)
    {
        std::cout << "FR4G-TP [" << name << "] attacks [" << target << "] at range, causing [" << RangedAttackDamage << "] points of damage !\n";
        //EnergyPoints = (EnergyPoints - 15) > 0 ? EnergyPoints - 15 : 0;
    }

    void meleeAttack(std::string const &target)
    {
        std::cout << "FR4G-TP [" << name << "] attacks [" << target << "] at melee, causing [" << MeleeAttackDamage << "] points of damage !\n";
        //EnergyPoints = (EnergyPoints - 10) > 0 ? EnergyPoints - 10 : 0;
    }

    void takeDamage(unsigned int amount)
    {
        std::cout << "FR4G-TP [" << name << "] has been atacked by [" << amount << "] hp!\n";
        HitPoints = (HitPoints - amount) + ArmorDamageReduction > 0 ? (HitPoints - amount) + ArmorDamageReduction : 0;
        HitPoints = HitPoints < 0 ? 0 : (HitPoints > MaxHitPoints ? MaxHitPoints : HitPoints);
    }
        
    void beRepaired(unsigned int amount)
    {
        std::cout << "FRAG-TP [" << name << "] has been repared by [" << amount << "] hp!\n";
        HitPoints = (HitPoints + amount) <= MaxHitPoints ? HitPoints + amount : MaxHitPoints;
    }
    void challengeNewcomer()
    {
        const char *challenges[] = {"Imagine Challenges!\n", "Imagine You Imagine Challenges!\n", "Imagine You Challenging You To Imagine To Chalenging You To Imagine Challenges!\n", "Don't think about imagine challenges!\n", NULL};
        
        int random = rand() % 4;

        std::cout << "Hey dude!, This is your challenge: " << challenges[random];
    }
};

#endif