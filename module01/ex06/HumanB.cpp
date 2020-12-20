/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:19:54 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 06:58:45 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& n, Weapon& w) : name(n)
{
	weapon = &w;
	std::cout << "An human B has been creted!" << std::endl;
}
HumanB::HumanB(const std::string& n) : name(n)
{
	weapon = NULL;
	std::cout << "An human B has been creted!" << std::endl;
}
HumanB::~HumanB() { std::cout << "An human B has been destroyed!" << std::endl; }

void				HumanB::attack() { std::cout << getName() << " attacks with his " << weapon->getType() << std::endl; }
void				HumanB::setWeapon(Weapon &w) { weapon = &w; }
const std::string	HumanB::getName() const { return (name); }