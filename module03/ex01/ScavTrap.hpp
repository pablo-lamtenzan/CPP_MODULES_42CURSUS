/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 03:37:56 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 17:52:11 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <random>

class ScavTrap
{
    protected :

    int __HitPoints;
    int __MaxHitPoints;
    int __EnergyPoints;
    int __MaxEnergyPoints;
    int __Level;
    std::string __name;
    int __MeleeAttackDamage;
    int __RangedAttackDamage;
    int __ArmorDamageReduction;
    
    public :

    // Constructor
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &src);

    // Destructors
    ~ScavTrap();

    // Oparators
    ScavTrap &operator= (const ScavTrap &src);

    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer();
};

#endif