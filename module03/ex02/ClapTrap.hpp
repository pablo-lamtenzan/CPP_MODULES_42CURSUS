/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 04:17:55 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 05:23:37 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class ClapTrap
{
    private  :

    ClapTrap(std::string _FragTrap, std::string _ScavTrap);
    FragTrap *fragtrap;
    Scavtrap *scavtrap;

    public : 

    int HitPoints;
    int MaxHitPoints;
    int EnergyPoints;
    int MaxEnergyPoints;
    int Level;
    int MeleeAttackDamage;
    int RangedAttackDamage;
    int ArmorDamageReduction;

    
}

#endif