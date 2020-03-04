/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 03:41:16 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 03:54:37 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

Scavtrap::Scavtrap(std::string name)
{
    this->HitPoints = 100;
    this->MaxHitPoints = 100;
    this->EnergyPoints = 50;
    this->MaxEnergyPoints = 50;
    this->Level = 1;
    this->name = name;
    this->MeleeAttackDamage = 20;
    this->RangedAttackDamage = 15;
    this->ArmorDamageReduction = 3;
    this->ptr = (const void *)this;

    std::cout << "Hi im ur new Scavtrap and i been created!\n";
}