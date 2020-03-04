/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:27:33 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 05:35:20 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string self_name, std::string _FragTrap, std::string _NinjaTrap)
{
    this->ninjatrap = &NinjaTrap(_FragTrap);
    this->fragtrap =  &FragTrap(_FragTrap);
    this->HitPoints = this->fragtrap->HitPoints;
    this->MaxHitPoints = this->fragtrap->MaxHitPoints;
    this->EnergyPoints = this->ninjatrap->EnergyPoints;
    this->MaxEnergyPoints = this->ninjatrap->MaxEnergyPoints;
    this->Level = 1;
    this->name = self_name;
    this->MeleeAttackDamage = this->ninjatrap->MeleeAttackDamage;
    this->RangedAttackDamage = this->fragtrap->RangedAttackDamage;
    this->ArmorDamageReduction = this->fragtrap->ArmorDamageReduction;

    // methods
    this->rangedAttack = &this->fragtrap->rangedAttack;
    this->meleeAttack = &this->ninjatrap->meleeAttack;
    
}