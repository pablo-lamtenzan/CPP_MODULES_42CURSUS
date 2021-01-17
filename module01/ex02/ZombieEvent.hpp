/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 01:08:57 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/23 08:05:13 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
    private :

    std::string	type;

    public :

    ZombieEvent();
	~ZombieEvent();
    void setZombieType();
    const std::string& get_type() const;
	Zombie *newZombie(const std::string& name);
};

void		randomChump(void);

#endif