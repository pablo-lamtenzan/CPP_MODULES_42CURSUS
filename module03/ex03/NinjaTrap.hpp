/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 04:55:28 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 05:10:28 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public :

    NinjaTrap(std::string name);
    const void *ptr;
    std::string name;

    void rangedAttack(std::string const &target)
    {
        std::cout << "FR4G-TP {" << name << "} attacks {" << target << "} at range, causing {" << RangedAttackDamage << "} points of damage !\n";
        //EnergyPoints = (EnergyPoints - 15) > 0 ? EnergyPoints - 15 : 0;
    }

    void meleeAttack(std::string const &target)
    {
        std::cout << "FR4G-TP {" << name << "} attacks {" << target << "} at melee, causing {" << MeleeAttackDamage << "} points of damage !\n";
        //EnergyPoints = (EnergyPoints - 10) > 0 ? EnergyPoints - 10 : 0;
    }

    void takeDamage(unsigned int amount)
    {
        std::cout << "FR4G-TP {" << name << "} has been atacked by {" << amount << "} hp!\n";
        HitPoints = (HitPoints - amount) + ArmorDamageReduction > 0 ? (HitPoints - amount) + ArmorDamageReduction : 0;
        HitPoints = HitPoints < 0 ? 0 : (HitPoints > MaxHitPoints ? MaxHitPoints : HitPoints);
    }
        
    void beRepaired(unsigned int amount)
    {
        std::cout << "FRAG-TP {" << name << "} has been repared by {" << amount << "} hp!\n";
        HitPoints = (HitPoints + amount) <= MaxHitPoints ? HitPoints + amount : MaxHitPoints;
    }
    
    void ninjaShoebox()
    {
        /* dont understant this for the momment */
    }
};

#endif