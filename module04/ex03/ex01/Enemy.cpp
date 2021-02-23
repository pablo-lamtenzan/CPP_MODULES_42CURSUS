/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:21:08 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 04:47:56 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string& t) : type(t), hitpoints(hp) { std::cout << "An Enemy has been constructed!" << std::endl; }

Enemy::Enemy(const Enemy &src)
{
	std::cout << "An Enemy has been constructed by copy!" << std::endl;
	operator=(src);
}

Enemy::~Enemy() { std::cout << "An Enemy has been destroyed!" << std::endl; }

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
	const long	hp = hitpoints - amount;
	hitpoints = hp > 0 ? hp : 0;
}

void				Enemy::setHP(int hp) { hitpoints = hp; }