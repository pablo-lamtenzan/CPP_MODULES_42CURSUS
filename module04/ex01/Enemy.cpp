/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:21:08 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 02:36:46 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

// Constructors

Enemy::Enemy(int hp, std::string const &type)
{
    this->__type = type;
    this->__hp = hp;
    return ;
}

Enemy::Enemy()
{
    this->__type = "default";
    this->__hp = 100;
    return ;
}

Enemy::Enemy(const Enemy &src)
{
    *this = src;
}

// Destructors

Enemy::~Enemy()
{
    ;   
}

// Operators

Enemy
&Enemy::operator= (const Enemy &src)
{
    if (this != &src)
    {
        this->__type = src.__type;
        this->__hp = src.__hp;
    }
    return (*this);
}

// Methods

std::string
Enemy::getType() const
{
    return (this->__type);
}
    
int
Enemy::getHP() const
{
    return (this->__hp);
}


void
Enemy::takeDamage(int amount)
{
    this->__hp = this->__hp - amount > 0 ? this->__hp - amount : 0;
    return ;
}
