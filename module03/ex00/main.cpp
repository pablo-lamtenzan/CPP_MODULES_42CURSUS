/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 03:08:27 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 12:35:11 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    srand(time(NULL));
    FragTrap F("Frag-Frag");
	std::cout << "[FRAG-TRAP] TEST PART 1: ATTACK!" << std::endl << std::endl;
	std::cout << "Initial energy points are 100" << std::endl;
    F.vaulthunter_dot_exe("Target1");
    F.vaulthunter_dot_exe("Target2");
    F.vaulthunter_dot_exe("Target3");
    F.vaulthunter_dot_exe("Target4");
    F.vaulthunter_dot_exe("Target5");
    F.vaulthunter_dot_exe("Target6");

	std::cout << std::endl << "[FRAG-TRAP] TEST PART 2: TAKE DAMAGE AND BE REPAREID" << std::endl << std::endl;
	std::cout << "HP now is: " << F.get_hp() << std::endl;
    F.takeDamage(50);
	std::cout << "HP now is: " << F.get_hp() << std::endl;
    F.beRepaired(42);
    std::cout << "HP now is: " << F.get_hp() << std::endl;
    F.beRepaired(150);
    std::cout << "HP now is: " << F.get_hp() << std::endl;
    F.takeDamage(800);
    std::cout << "HP now is: " << F.get_hp() << std::endl;
	std::cout << std::endl << "EXIT" << std::endl;
	return (0);
}