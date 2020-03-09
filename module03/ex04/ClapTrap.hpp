/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 04:17:55 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 21:45:54 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
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

    // Constructors
    ClapTrap(int HitPoints, int MaxHitPoints, int EnergyPoints, int MaxEnergyPoints, int Level, std::string name, int MeleeAttackDamage, int RangedAttackDamage, int ArmorDamageReduction);
    ClapTrap(const ClapTrap &src);
    ClapTrap();

    // Destructors
    ~ClapTrap();

    // Operators
    ClapTrap &operator= (const ClapTrap &src);

    std::string getName() const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
};

#endif