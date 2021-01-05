/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 09:55:18 by pablo             #+#    #+#             */
/*   Updated: 2021/01/05 05:19:39 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	// Test dinamic assigantion
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	std::cout << std::endl;

	// Test equip / attack
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me << std::endl;

	// More tests cuase subject said i need more tests ...

	// Test the copy assignation
	Character* m2(me);
	std::cout << *m2;
	Character* m3 = m2;
	std::cout << *m3 << m3->getName() << std::endl;
	Enemy* s = new SuperMutant();
	m3->equip(pr);
	std::cout << "Supermutant's hp before atack: " << s->getHP() << std::endl;
	m3->attack(s);
	std::cout << *m3;
	std::cout << "Supermutant's hp after atack: " << s->getHP() << std::endl;
	Enemy* l = s;
	std::cout << "Supermutant's copy hp: " << l->getHP() << std::endl;

	std::cout << std::endl << "EXIT" << std::endl;
	delete me;
	delete s;
	delete pr;
	delete pf;

	return (0);
}