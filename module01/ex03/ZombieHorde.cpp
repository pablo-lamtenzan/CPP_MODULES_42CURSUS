/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 02:42:54 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 03:26:27 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
    this->N = N;
    HordeZombies = new Zombie[N];
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