/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssualtTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 04:15:54 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 04:23:37 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

// Constructor

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *\n";
    return ;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src)
{
    *this = src;
    std::cout << "* teleports from space *\n";
    return ;
}

// Destructors

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back...\n";
    return ;
}

// Operators

AssaultTerminator
&AssaultTerminator::operator= (const AssaultTerminator &src)
{
    if (this != &src)
    {
        ; // copy if i have properties
    }
    return (*this);
}

// Methods

AssaultTerminator
*TacticalMarine::clone() const
{
    return (new TacticalMarine); // correct that just need do find how init and allocate in pure virtual
}

void
AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!\n";
    return ;
}

void
AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *\n";
    return ;
}

void
AssaultTerminator::rangedAtack() const
{
    std::cout << "* does nothing *\n";
    return ;
}