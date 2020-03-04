/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 04:31:08 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 04:35:12 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _FragTrap, std::string _ScavTrap)
{
    this->scavtrap = &Scavtrap(_ScavTrap);
    this->fragtrap = &FragTrap(_FragTrap);

    std::cout << "You have construct ClapTrap!\n\n\n";
}