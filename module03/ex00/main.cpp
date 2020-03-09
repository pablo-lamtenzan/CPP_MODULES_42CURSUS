/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 03:08:27 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 19:31:37 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{

    srand(time(NULL));
    FragTrap lol("AES");
    printf("\n  TEST PART 1: VAULTHUNDER AND ATTACKS\n\n");
    lol.rangedAttack("RC4");
    lol.vaulthunter_dot_exe("RSA");
    lol.vaulthunter_dot_exe("RC5");
    lol.vaulthunter_dot_exe("Wifi");
    lol.vaulthunter_dot_exe("Bruh no mre ideas");
    lol.vaulthunter_dot_exe("Just another one");
    lol.vaulthunter_dot_exe("One more for be sure");

    printf("\n  TEST PART 2: TAKE DAMAGE AND BE REPAREID\n\n");
    lol.takeDamage(50);
    printf("%d\n", lol.getHitPoints());
    lol.beRepaired(42);
    printf("%d\n", lol.getHitPoints());
    lol.beRepaired(150);
    printf("%d\n", lol.getHitPoints());
    lol.takeDamage(800);
    printf("%d\n", lol.getHitPoints());
}