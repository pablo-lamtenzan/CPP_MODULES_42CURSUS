/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 03:50:53 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 04:09:35 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

// Constructors

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!\n";
    return ;
}

TacticalMarine::TacticalMarine(const TacticalMarine &src)
{
    *this = src;
    std::cout << "Tactical Marine ready for battle!\n";
    return ;
}

// Destructors

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh...\n";
    return ;
}

// Operators

TacticalMarine
&TacticalMarine::operator= (const TacticalMarine &src)
{
    if (this != &src)
    {
        ; // copy if i have properties
    }
    return (*this);
}

// Methods

TacticalMarine
*TacticalMarine::clone() const
{
    return (new TacticalMarine); // correct that just need do find how init and allocate in pure virtual
}

void
TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!\n";
    return ;
}

void
TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a bolter *\n";
    return ;
}

void
TacticalMarine::rangedAtack() const
{
    std::cout << "* attacks with a chainsword *\n";
    return ;
}