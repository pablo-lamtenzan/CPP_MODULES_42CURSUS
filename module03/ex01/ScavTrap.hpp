/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 03:37:56 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 13:30:55 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <random>

class ScavTrap
{
    protected :

    ssize_t				HitPoints;
    ssize_t				MaxHitPoints;
    ssize_t				EnergyPoints;
    ssize_t				MaxEnergyPoints;
    ssize_t				Level;
    std::string 		name;
    ssize_t				MeleeAttackDamage;
    ssize_t				RangedAttackDamage;
    ssize_t				ArmorDamageReduction;
    const void*const	ptr;

    public :

    ScavTrap();
    ScavTrap(const std::string& n);
    ScavTrap(const ScavTrap& src);
    ~ScavTrap();
    ScavTrap&	operator=(const ScavTrap& src);
    void		rangedAttack(std::string const& target);
    void		meleeAttack(std::string const& target);
    void		takeDamage(unsigned int amount);
    void		beRepaired(unsigned int amount);
    void		challengeNewcomer();
};

#endif