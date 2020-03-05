/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:26:03 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 02:44:21 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

// Constructors

SuperMutant::SuperMutant()
{
    this->__hp = 170;
    this->__type = "Super Mutant";
    std::cout << "Gaaah. Me want smash heads!\n";
    return ;
}

SuperMutant::SuperMutant(const SuperMutant &src)
{
    *this = src;
    return ;
}

// Destructors

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh...";
    return ;
}

// Ooperators

SuperMutant
&SuperMutant::operator= (const SuperMutant &src)
{
    if (this == &src)
    {
        this->__type = src.__type;
        this->__hp = src.__hp;
    }
    return (*this);
}

// Methods

void
SuperMutant::takeDamage(int amount)
{
    this->__hp = this->__hp - amount + 3 > 0 ? this->__hp - amount + 3 : 0;
    return ;
}

