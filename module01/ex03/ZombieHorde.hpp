/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 02:38:43 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 05:09:39 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>

#include "Zombie.hpp"

class ZombieHorde
{
    private :

    size_t amount;
	Zombie *HordeZombies;

    public :

	ZombieHorde();
	ZombieHorde(size_t zombies_amount);
	~ZombieHorde();
    void foreach_anounce();
    size_t get_amount() const;
	Zombie *get_horde() const &;
};

#endif