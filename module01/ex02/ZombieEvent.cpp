/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 01:32:25 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/23 08:05:47 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <random>

ZombieEvent::ZombieEvent() : type("Undefinded") { std::cout << "Zombie event obj has been created!" << std::endl; }
ZombieEvent::~ZombieEvent() { std::cout << "Zombie event obj has been destroyed" << std::endl; }

void ZombieEvent::setZombieType()
{
	std::string t;

	std::cout << "Type the desired type of the Zombie:" << std::endl << ">> ";
	std::cin >> t;
	type = t;
}

const std::string&	ZombieEvent::get_type() const { return (type); }
    
Zombie	*ZombieEvent::newZombie(const std::string& name)
{
	std::string t = get_type();
    return (new Zombie(name, t));
}

/*
** The use of the stack is inecesary if i wanna use it i must define globaly the variable.
** Using the heap i can return a pointer who will survive travalling frames.
*/

void			randomChump()
{
		static const char*const names[] {
		"Bob",
		"Richard",
		"Amanda",
		"Carrol",
		"Alex"
	};
	std::string n(names[rand() % (sizeof(names) / sizeof(*names))]);

	ZombieEvent ZombieEv = ZombieEvent();
	ZombieEv.setZombieType();
	Zombie *Z = ZombieEv.newZombie(n);
	Z->announce();
	delete Z;
}
