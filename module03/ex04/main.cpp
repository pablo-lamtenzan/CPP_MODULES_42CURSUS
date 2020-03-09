/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 22:09:25 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 22:10:33 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	{
		FragTrap ft("FR4GGY");

		for (int i = 0; i < 7; i++)
			ft.takeDamage(20);

		for (int i = 0; i < 7; i++)
			ft.beRepaired(20);

		ft.rangedAttack("alice");
		ft.meleeAttack("bob");

		for (int i = 0; i < 10; i++)
			ft.vaulthunter_dot_exe("GLADOS");

		ScavTrap st("SCAVVY");

		for (int i = 0; i < 7; i++)
			st.takeDamage(20);

		for (int i = 0; i < 7; i++)
			st.beRepaired(20);

		st.rangedAttack("bobby");
		st.meleeAttack("john");

		for (int i = 0; i < 5; i++)
			st.challengeNewcomer();

		NinjaTrap n("NINJA");

		for (int i = 0; i < 7; i++)
			n.takeDamage(20);

		for (int i = 0; i < 7; i++)
			n.beRepaired(20);

		n.ninjaShoebox(n);
		n.ninjaShoebox(ft);
		n.ninjaShoebox(st);

		ClapTrap t(10, 10, 10, 10, 1, "hi", 10, 10, 10);
		n.ninjaShoebox(t);
	}

	{
		std::cout << std::endl;
		SuperTrap s("hello");

		s.rangedAttack("hello");
		s.meleeAttack("hello");
	}
}