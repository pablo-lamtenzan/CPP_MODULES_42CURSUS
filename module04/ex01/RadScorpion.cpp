/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:35:26 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 02:50:31 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

// Constructors

RadScorpion::RadScorpion()
{
    this->__hp = 80;
    this->__type = "Rad Scorpion";
    std::cout << "* click click click *\n";
    return ;
}

RadScorpion::RadScorpion(const RadScorpion &src)
{
    *this = src;
    return ;
}

// Destructors

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *\n";
    return ;
}

// Operators

RadScorpion
&RadScorpion::operator= (const RadScorpion &src)
{
    if (this != &src)
    {
        this->__type = src.__type;
        this->__hp = src.__hp;
    }
    return (*this);
}
