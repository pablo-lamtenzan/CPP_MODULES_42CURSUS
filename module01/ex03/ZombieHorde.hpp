/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 02:38:43 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 16:28:04 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>

#include "Zombie.hpp"

class ZombieHorde
{
    private :

    int __N;

    protected :
    
    Zombie *HordeZombies;
    
    public :
    
    // Constructors
    ZombieHorde();
    ZombieHorde(int N);
    
    // Destructors
    ~ZombieHorde();
    
    // Shared methods
    void foreach_anounce();
    int getN() const;
};

#endif