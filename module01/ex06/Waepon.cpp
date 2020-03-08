/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Waepon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:56:12 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 17:20:46 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    
}

Weapon::Weapon(std::string type) : __type(type)
{

}

Weapon::~Weapon()
{
    
}

const std::string 
&Weapon::getType() const
{
    return (this->__type);
}

void
Weapon::setType(std::string newType)
{
    this->__type = newType; 
}