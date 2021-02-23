/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:26:03 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 04:49:28 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") { std::cout << "Gaaah. Me want smash heads!" << std::endl; }
SuperMutant::SuperMutant(const Enemy& src) : Enemy(src) { std::cout << "Gaaah. Me want smash heads!" << std::endl; }
SuperMutant::~SuperMutant() {  std::cout << "Aaargh..." << std::endl; }

SuperMutant&	SuperMutant::operator=(const Enemy& src)
{
    Enemy::operator=(src);
    return (*this);
}

void			SuperMutant::takeDamage(int amount)
{
	const long hp = getHP() - amount + 3;
	setHP(hp > 0 ? hp : 0);
}

