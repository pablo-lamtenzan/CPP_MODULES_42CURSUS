/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 23:41:01 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 02:58:09 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string n, std::string c, std::string h, std::string fm)
	: name(n), color(c), height(h), fav_meal(fm) {}
	
Pony::~Pony() { std::cout << "Pony was destroyed by its destructor." << std::endl; }

const std::string	Pony::get_name() const { return (name); }
const std::string	Pony::get_color() const { return (color); }
const std::string	Pony::get_height() const { return (height); }
const std::string	Pony::get_fav_meal() const { return (fav_meal); }

void		ponyOnTheHeap()
{
	std::string	name;
	std::string color;
	std::string height;
	std::string fav_meal;

	std::cout << "Welcome to PONY ON THE HEAP! Customize your Pony:" << std::endl;
	std::cout << "Name:" << std::endl << ">> ";
	std::cin >> name;
	std::cout << "Color:" << std::endl << ">> ";
	std::cin >> color;
	std::cout << "Height:" << std::endl << ">> ";
	std::cin >> height;
	std::cout << "Favorite meal:" << std::endl << ">> ";
	std::cin >> fav_meal;
	
	Pony *P = new Pony(name, color, height, fav_meal);
	if (!P)
	{
		std::cout << "Error: Not enought heap room avlaible in your device!" << std::endl;
		return ;
	}
	
	std::cout << P->get_name() << " is allocated in the heap!" << std::endl << \
			"Color: " << P->get_color() << std::endl << \
			"Height: " << P->get_height() << std::endl << \
			"Favorite meal: " << P->get_fav_meal() << std::endl;

	delete P;
	std::cout << "Awesome! Now " << name << " has been delete from the heap. (type any key to continue)" << std::endl;
}

void        ponyOnTheStack(void)
{
    std::string	name;
	std::string color;
	std::string height;
	std::string fav_meal;

	std::cout << "Welcome to PONY ON THE HEAP! Customize your Pony:" << std::endl;
	std::cout << "Name:" << std::endl << ">> ";
	std::cin >> name;
	std::cout << "Color:" << std::endl << ">> ";
	std::cin >> color;
	std::cout << "Height:" << std::endl << ">> ";
	std::cin >> height;
	std::cout << "Favorite meal:" << std::endl << ">> ";
	std::cin >> fav_meal;

    const Pony P(name, color, height, fav_meal);
   std::cout << P.get_name() << " is allocated in the stack!" << std::endl << \
			"Color: " << P.get_color() << std::endl << \
			"Height: " << P.get_height() << std::endl << \
			"Favorite meal: " << P.get_fav_meal() << std::endl;

	std::cout << "In this case, " << P.get_name() << " exits only in its scope ... (type any key to continue)" << std::endl;
}