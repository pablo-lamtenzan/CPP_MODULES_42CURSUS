/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:26:03 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 09:52:25 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") { std::cout << "Gaaah. Me want smash heads!" << std::endl; }
SuperMutant::SuperMutant(const SuperMutant &src) : Enemy(src) { std::cout << "Gaaah. Me want smash heads!" << std::endl; }
SuperMutant::~SuperMutant() {  std::cout << "Aaargh..." << std::endl; }

SuperMutant&	SuperMutant::operator= (const SuperMutant &src)
{
    Enemy::operator=(src);
    return (*this);
}

void			SuperMutant::takeDamage(int amount)
{
	const ssize_t hp = getHP() - amount + 3;
	setHP(hp > 0 ? hp : 0);
    return ;
}

