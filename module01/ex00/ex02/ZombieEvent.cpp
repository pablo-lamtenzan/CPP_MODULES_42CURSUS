/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 01:32:25 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 01:50:11 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <random>

void            randomChump(void)
{
    const char names[4][10] = {"Jeff", "Richard", "Bob", "Jamie"};
    
    ZombieEvent *ZombiesDoingZombiesThinks = new ZombieEvent();
    ZombiesDoingZombiesThinks->setZombieType();
    Zombie *Brainsss = ZombiesDoingZombiesThinks->newZombie(names[std::rand() % 3]);
    Brainsss->announce();
    delete Brainsss;
    delete ZombiesDoingZombiesThinks;
}