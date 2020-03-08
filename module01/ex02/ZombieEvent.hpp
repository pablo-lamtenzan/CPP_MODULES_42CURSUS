/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 01:08:57 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 16:08:18 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

void            randomChump(void);

class ZombieEvent
{
    private :

    std::string __type;
    
    public :

    // Constructors
    ZombieEvent();
    
    // Shared methods
    void setZombieType(void);
    std::string getType() const;
    Zombie *newZombie(std::string name);
};

#endif