/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:21:08 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 10:39:53 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const& t) { hitpoints = hp; type = t; }

Enemy::Enemy(const Enemy &src)
{
	if (this != &src)
    	*this = src;
}

Enemy::~Enemy() { }

Enemy&	Enemy::operator= (const Enemy& src)
{
    if (this != &src)
    {
        type = src.type;
        hitpoints = src.hitpoints;
    }
    return (*this);
}

const std::string&	Enemy::getType() const { return (type); }
int					Enemy::getHP() const { return (hitpoints); }

void				Enemy::takeDamage(int amount)
{
	const ssize_t	hp = hitpoints - amount;
	hitpoints = hp > 0 ? hp : 0;
}

void				Enemy::setHP(int hp) { hitpoints = hp; }