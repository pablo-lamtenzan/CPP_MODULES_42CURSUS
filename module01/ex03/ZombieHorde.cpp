/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo     ~ZombieHorde();
<pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 02:42:54 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 04:55:40 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde() : amount(0) { std::cout << "An horde can be named an horde if is empty!" << std::endl; }

ZombieHorde::ZombieHorde(size_t zombies_amount)
{
    if (zombies_amount >= 0)
        amount = zombies_amount;
    else
	{
		std::cout << "An horde can be named an horde if is empty!" << std::endl;
        return ;
	}
    HordeZombies = new Zombie[amount];
    size_t i = -1;
    while (++i < amount)
    {
        HordeZombies[i].RandName();
        HordeZombies[i].RandType();
    }
	std::cout << "An horde containing " << amount << " zombies has been created!" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
    delete[] HordeZombies;
	std::cout << "An horde containing " << amount << " zombies has been deleted!" << std::endl;
}

size_t	ZombieHorde::get_amount() const { return (amount); }
Zombie	*ZombieHorde::get_horde() const & { return (HordeZombies); }

void
ZombieHorde::foreach_anounce()
{
	for (size_t i = 0; i < amount; i++)
		HordeZombies[i].announce();
}