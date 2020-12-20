/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:10:17 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 06:58:48 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"



HumanA::HumanA(const std::string& n, Weapon& w ) : name(n)
{
	weapon = &w;
	std::cout << "An human A has been creted!" << std::endl;
}
HumanA::HumanA(const std::string& n) : name(n)
{
	weapon = NULL;
	std::cout << "An human A has been creted!" << std::endl;
}
HumanA::~HumanA() { std::cout << "An human A has been destroyed!" << std::endl; }

void				HumanA::attack() { std::cout << getName() << " attacks with his " << weapon->getType() << std::endl; }
void				HumanA::setWeapon(Weapon& w) { weapon = &w; }
const std::string	HumanA::getName() const { return (name); }
