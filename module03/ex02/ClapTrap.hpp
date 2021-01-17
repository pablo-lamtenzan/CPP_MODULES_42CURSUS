/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 04:17:55 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/29 19:37:37 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

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
	ClapTrap(ssize_t hp, ssize_t max_hp, ssize_t ep, ssize_t max_ep, ssize_t lv, const std::string& name, ssize_t m_ad, ssize_t r_ad, ssize_t armor);
    virtual ~ClapTrap();
    ClapTrap&			operator=(const ClapTrap& src);
    void 				takeDamage(unsigned int amount);
    void				beRepaired(unsigned int amount);
	const std::string&	getName() const;
	ssize_t				get_hp() const;
};
