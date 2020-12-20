/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 00:59:23 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 04:33:14 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}
Zombie::Zombie(std::string& n, std::string &t) : name(n), type(t) { std::cout << "New zombie has been created!" << std::endl; }
Zombie::~Zombie() {std::cout << "New zombie has been destroyed!" << std::endl; }

const	std::string Zombie::get_name() const { return (name); }
const	std::string Zombie::get_type() const { return (type); }
void	Zombie::announce() { std::cout << '<' << get_name() << " (" << get_type() << ")> Braiiiiiiinnnssss..." << std::endl; }

void Zombie::RandName()
{
	static const char*const names[] {
		"Bob",
		"Richard",
		"Amanda",
		"Carrol",
		"Alex"
	};
	name = names[rand() % (sizeof(name) / sizeof(*names))];
}

void Zombie::RandType()
{
	static const char*const types[] {
		"Forest walker",
		"Mid-night hunter",
		"Marine diver",
		"Friendly",
		"Sleeper"
	};
	type = types[rand() % (sizeof(type) / sizeof(*types))];
}
