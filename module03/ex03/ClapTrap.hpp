/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 04:17:55 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 04:26:49 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected :

	ClapTrap			*itself;
    ssize_t				HitPoints;
    ssize_t				MaxHitPoints;
    ssize_t				EnergyPoints;
    ssize_t				MaxEnergyPoints;
    ssize_t				Level;
    std::string 		name;
    ssize_t				MeleeAttackDamage;
    ssize_t				RangedAttackDamage;
    ssize_t				ArmorDamageReduction;

    public :

    ClapTrap(const ClapTrap& src);
    ClapTrap();
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap& src);
    void 		takeDamage(unsigned int amount);
    void		beRepaired(unsigned int amount);
	std::string getName() const;
	ssize_t		get_hp() const;
};

#endif