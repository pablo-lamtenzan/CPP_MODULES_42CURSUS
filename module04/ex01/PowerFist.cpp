/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:12:39 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 02:27:42 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

// Constructors

PowerFist::PowerFist()
{
    this->__name = "Power Fist";
    this->Damage = 50;
    this->APCost = 8;
    return ;
}

PowerFist::PowerFist(const PowerFist &src)
{
    *this = src;
    return ;
}

// Destructor

PowerFist::~PowerFist()
{
    return ;
}

// Operators

PowerFist
&PowerFist::operator= (const PowerFist &src)
{
    if (this != &src)
    {
        this->__name = src.__name;
        this->Damage = src.Damage;
        this->APCost = src.APCost;
    }
    return (*this);
}

// Methods

void
PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *\n";
    return ;
}
