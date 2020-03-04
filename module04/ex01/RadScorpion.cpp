/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:35:26 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 07:38:15 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
    this->hp = 80;
    this->type = "Rad Scorpion";
    
    std::cout << ""Aaargh..."* click click click *\n";
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *\n"
}