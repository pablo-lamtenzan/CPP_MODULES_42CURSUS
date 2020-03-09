/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:27:33 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 22:09:00 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name)
{
    ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5);
    // FragTrap(name);
    // NinjaTrap(name);
    std::cout << "SUPERTRAP " << name <<  " IS HERE !" << std::endl;
}

SuperTrap::SuperTrap()
{
    
}

SuperTrap::SuperTrap(const SuperTrap &src)
{
    // FragTrap(name);
    // NinjaTrap(name);
    std::cout << "SUPERTRAP " << src.__name <<  " IS HERE !" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "SuperTrap \"" << this->__name <<  "\" dieddddd RIP" << std::endl;
}

void
SuperTrap::meleeAttack(const std::string &target)
{
    NinjaTrap::meleeAttack(target);
}

void
SuperTrap::rangedAttack(const std::string &target)
{
    FragTrap::rangedAttack(target);
}