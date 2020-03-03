/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 02:38:43 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 03:25:08 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>

#include "Zombie.hpp"

class ZombieHorde
{
    public :
    ZombieHorde(int N);
    ~ZombieHorde();
    
    int N;
    Zombie *HordeZombies;

    void foreach_anounce()
    {
        int i = -1;
        while (++i < N)
        {
            HordeZombies[i].announce();
        }
    }
};

#endif