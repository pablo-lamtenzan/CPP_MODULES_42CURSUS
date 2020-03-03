/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 01:08:57 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 01:44:47 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

void            randomChump(void);

class ZombieEvent
{
    public :
    
    std::string type;
    void setZombieType(void) // bad i think
    {
        std::string type;
        std::cout << "Please set the type of this Zombie.\n";
        std::cin >> type;
        this->type = type;
    }
    
    Zombie *newZombie(std::string name)
    {
        Zombie *brainssss = new Zombie(name, this->type);
        return (brainssss);
    }
};

#endif