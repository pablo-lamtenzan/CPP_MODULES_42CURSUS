/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:10:55 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 05:15:13 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
{
    this->HitPoints = 60;
    this->MaxHitPoints = 60;
    this->EnergyPoints = 120;
    this->MaxEnergyPoints = 120;
    this->Level = 1;
    this->name = name;
    this->MeleeAttackDamage = 60;
    this->RangedAttackDamage = 5;
    this->ArmorDamageReduction = 0;

    std::cout << "\n\nNinjaTrap Unleash!\n\n";
}