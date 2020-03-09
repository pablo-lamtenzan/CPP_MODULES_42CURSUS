/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 02:20:47 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 19:31:16 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <iostream>
#include <random>

class FragTrap
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
    const void *ptr;

    public :

    // Constructors
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &src);

    // Destructors
    ~FragTrap();

    // Operators
    FragTrap &operator= (const FragTrap &src);

    // Shared methods
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const &target);

    int getHitPoints() const;
};

#endif
