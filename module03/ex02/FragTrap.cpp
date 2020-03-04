/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 03:03:57 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 03:33:52 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    this->HitPoints = 100;
    this->MaxHitPoints = 100;
    this->EnergyPoints = 100;
    this->MaxEnergyPoints = 100;
    this->Level = 1;
    this->name = name;
    this->MeleeAttackDamage = 30;
    this->RangedAttackDamage = 20;
    this->ArmorDamageReduction = 5;
    this->ptr = (const void *)this;
}
