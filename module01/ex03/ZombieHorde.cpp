/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 02:42:54 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 16:33:35 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{
    
}

ZombieHorde::ZombieHorde(int N)
{
    if (N >= 0)
        this->__N = N;
    else
        return ;
    this->HordeZombies = new Zombie[N];
    int i = -1;
    while (++i < N)
    {
        HordeZombies[i].RandName();
        HordeZombies[i].RandType();
    }
}

ZombieHorde::~ZombieHorde()
{
    delete[] HordeZombies;
}

int
ZombieHorde::getN() const
{
    return (this->__N);
}

void
ZombieHorde::foreach_anounce()
{
    int i = -1;
    while (++i < this->getN())
    {
        HordeZombies[i].announce();
    }
}