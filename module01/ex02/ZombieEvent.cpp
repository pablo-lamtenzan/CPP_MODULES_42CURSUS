/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 01:32:25 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 16:14:45 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <random>

ZombieEvent::ZombieEvent()
{
    
}

void
ZombieEvent::setZombieType()
{
    std::string type;
    std::cout << "Please set the type of this Zombie.\n";
    std::cin >> type;
    this->__type = type;
}

std::string
ZombieEvent::getType() const
{
    return (this->__type);
}
    
Zombie
*ZombieEvent::newZombie(std::string name)
{
    Zombie *brainssss = new Zombie(name, this->getType());
    return (brainssss);
}

void            randomChump(void)
{
    const char names[4][10] = {"Jeff", "Richard", "Bob", "Jamie"};
    
    ZombieEvent *ZombiesDoingZombiesThinks = new ZombieEvent();
    ZombiesDoingZombiesThinks->setZombieType();
    Zombie *Brainsss = ZombiesDoingZombiesThinks->newZombie(names[std::rand() % 4]);
    Brainsss->announce();
    delete Brainsss;
    delete ZombiesDoingZombiesThinks;
}
