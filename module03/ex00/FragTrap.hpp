/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 02:20:47 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/29 19:40:42 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <random>

class FragTrap
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

    FragTrap();
    FragTrap(const std::string& n);
    FragTrap(const FragTrap& src);
    ~FragTrap();
    FragTrap&	operator=(const FragTrap& src);
    void		rangedAttack(std::string const& target);
    void		meleeAttack(std::string const& target);
    void		takeDamage(unsigned int amount);
    void		beRepaired(unsigned int amount);
    void		vaulthunter_dot_exe(std::string const& target);
	ssize_t		get_hp() const;
};

