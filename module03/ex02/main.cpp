/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 04:35:19 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 21:07:47 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
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
    return (0);
}
