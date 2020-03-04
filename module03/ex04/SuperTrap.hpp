/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:20:06 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 05:36:58 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap , public NinjaTrap
{
    public :

    SuperTrap(std::string self_name, std::string _FragTrap, std::string _NinjaTrap);

    std::string name;
    const void *ptr;
    FragTrap *fragtrap;
    NinjaTrap *ninjatrap;

    int HitPoints;
    int MaxHitPoints;
    int EnergyPoints;
    int MaxEnergyPoints;
    int Level;
    int MeleeAttackDamage;
    int RangedAttackDamage;
    int ArmorDamageReduction;

    // if inheritance works i have shared properties and shared special functions and for not have public function i just have to pu tthen in reserved or private
};

#endif