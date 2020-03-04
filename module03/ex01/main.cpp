/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 04:01:05 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 04:04:31 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    srand(time(NULL));
    FragTrap lol("AES");
    printf("\n  TEST PART 1: VAULTHUNDER AND ATTACKS\n\n");
    lol.rangedAttack("RC4");
    lol.vaulthunder_dot_exe("RSA");
    lol.vaulthunder_dot_exe("RC5");
    lol.vaulthunder_dot_exe("Wifi");
    lol.vaulthunder_dot_exe("Bruh no mre ideas");
    lol.vaulthunder_dot_exe("Just another one");
    lol.vaulthunder_dot_exe("One more for be sure");

    printf("\n  TEST PART 2: TAKE DAMAGE AND BE REPAREID\n\n");
    lol.takeDamage(50);
    printf("%d\n", lol.HitPoints);
    lol.beRepaired(42);
    printf("%d\n", lol.HitPoints);
    lol.beRepaired(150);
    printf("%d\n", lol.HitPoints);
    lol.takeDamage(800);
    printf("%d\n", lol.HitPoints);

    printf("\n\n\n OTHER SHIT TO TEST MEAN OTHER LINES\n\n");
    
    Scavtrap lel("lol mdr lmao lmfao rolf xd");
    lel.challengeNewcomer();
}