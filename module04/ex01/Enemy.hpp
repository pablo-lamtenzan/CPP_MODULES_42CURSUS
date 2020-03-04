/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:15:38 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 07:20:57 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
    private :

    public :
    
    Enemy(int hp, std::string const &type);
    ~Enemy();
    Enemy(const Enemy&);
    Enemy &operator=(const Enemy&);

    std::string type;
    int hp;

    std::string getType()
    {
        return (type);
    }
    
    int getHP()
    {
        return (hp);
    }

    virtual void takeDamage(int amount)
    {
        hp = hp - amount > 0 ? hp - amount : 0;
    }
};

#ifndef