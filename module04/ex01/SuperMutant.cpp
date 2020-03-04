/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:26:03 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 07:31:28 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
    this->hp = 170;
    this->type = "Super Mutant";

    std::cout << "Gaaah. Me want smash heads!\n";
    
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh...";
}

