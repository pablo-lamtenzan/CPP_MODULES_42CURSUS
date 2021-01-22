/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: plamtenz <plamtenz@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/12/22 13:23:39 by pablo        #+#   ##    ##    #+#       */
/*   Updated: 2021/01/19 15:44:05 by plamtenz    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

# define TOTAL 21

int main()
{
	// Test squad initialisation
	ISquad* vlc = new Squad;
	std::cout << std::endl;

	// Test push
	for (int i = 0 ; i <  TOTAL; i++)
	{
		if (i % 2)
		{
			ISpaceMarine* x = new TacticalMarine;
			vlc->push(x);
			// test double push
			std::cout << "------------------------------" << std::endl;
			vlc->push(x);
		}
		else
		{
			ISpaceMarine* x = new AssaultTerminator;
			vlc->push(x);
		}
	}

	// Test displays and squad engine
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl;

	ISquad* xlb = vlc;

	// Test double push leaks
	std::cout << "l creation!" << std::endl;
	Squad* l = new Squad;
	ISpaceMarine* ss = new TacticalMarine;
	l->push(ss);
	l->push(ss);

	std::cout << "x creation!" << std::endl;
	Squad* x = new Squad;
	x->push(ss);
	x->push(ss);
	x = l;
	
	std::cout << "EXIT" << std::endl;
	delete xlb;
	std::cout << "----------------------------------" << std::endl;
	delete l;

	return (0);
}