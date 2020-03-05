/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:15:38 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 03:16:18 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
    protected :

    std::string __type;


    public :

    int __hp; // need to put here for Character.cpp ???????
    
    // Constructor
    Enemy(int hp, std::string const &type);
    Enemy();
    Enemy(const Enemy &src);

    // Destructors
    ~Enemy();
    
    // Operatros
    Enemy &operator=(const Enemy&);

    // Methods
    std::string getType() const;
    int getHP() const;
    virtual void takeDamage(int amount);
};

#endif