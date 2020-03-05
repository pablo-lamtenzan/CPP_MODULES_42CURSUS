/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 06:36:54 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 02:15:21 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <String>

class AWeapon
{
    protected :

    std::string __name;
    int Damage;
    int APCost;


    public :
    
    // Constructors
    AWeapon(std::string const &name, int apcost, int damage);
    AWeapon();
    AWeapon(const AWeapon &src);

    // Destructors
    ~AWeapon();

    // Operators
    AWeapon &operator=(const AWeapon &src);
    
    // Methods
    const std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    // Virtual Pure
    virtual void attack() const = 0;
};

#endif