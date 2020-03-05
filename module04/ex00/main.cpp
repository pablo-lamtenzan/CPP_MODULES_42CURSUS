/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 06:12:35 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 01:48:12 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"

int main()
{
    Sorcerer Joe("Joe", "clown");
    Victim Jim("Jim");
    Peon Jacob("Jacob");
    //std::cout << Joe << '\n' << Jim << '\n' << Jacob << "\n\nPolimorphism:\n";

    Joe.polymorph(Jim);
    std::cout << '\n';
    Joe.polymorph(Jacob);
    std::cout << '\n';
}
