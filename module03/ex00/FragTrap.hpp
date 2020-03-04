/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 02:20:47 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 04:06:12 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <iostream>
#include <random>

class FragTrap
{
    public :

    FragTrap(std::string name);
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
        std::cout << "FR4G-TP <" << name << "> attacks <" << target << "> at range, causing <" << RangedAttackDamage << "> points of damage !\n";
        //EnergyPoints = (EnergyPoints - 15) > 0 ? EnergyPoints - 15 : 0;
    }

    void meleeAttack(std::string const &target)
    {
        std::cout << "FR4G-TP <" << name << "> attacks <" << target << "> at melee, causing <" << MeleeAttackDamage << "> points of damage !\n";
        //EnergyPoints = (EnergyPoints - 10) > 0 ? EnergyPoints - 10 : 0;
    }

    void takeDamage(unsigned int amount)
    {
        std::cout << "FR4G-TP <" << name << "> has been atacked by <" << amount << "> hp!\n";
        HitPoints = (HitPoints - amount) + ArmorDamageReduction > 0 ? (HitPoints - amount) + ArmorDamageReduction : 0;
        HitPoints = HitPoints < 0 ? 0 : (HitPoints > MaxHitPoints ? MaxHitPoints : HitPoints);
    }
        
    void beRepaired(unsigned int amount)
    {
        std::cout << "FRAG-TP <" << name << "> has been repared by <" << amount << "> hp!\n";
        HitPoints = (HitPoints + amount) <= MaxHitPoints ? HitPoints + amount : MaxHitPoints;
    }

    void vaulthunder_dot_exe(std::string const &target)
    {
        if (EnergyPoints >= 25)
        {
            const char *attacks[] = {"Sword Attack!\n", "Hummer Attack!\n", "Physical Attack!\n", "Gun Attack!\n", "Arrow Attack!\n", NULL};
                
            int random = rand() % 5;
            const char *attack = attacks[random];

            int i = -1;
            while (strcmp(attacks[++i], attack));

            std::cout << attack;
            i > 2 ? rangedAttack(target) : meleeAttack(target);
            EnergyPoints -= 25;
        }
        else
            std::cout << "FRAG-TP <" << name << "> has not enought energy for vaulthunder (Energy is " << EnergyPoints << ").\n";   
    }
};
#endif