/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWaepon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 06:36:54 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 07:08:41 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWAEPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
    private :

    public :
    
    AWeapon(std::string const &name, int apcost, int damage); //constructor
    AWeapon();
    AWeapon(const AWeapon&); //copy of constructor
    ~AWeapon(); // destructor
    AWeapon &operator=(const AWeapon&); // affection operartor
    
    std::string name;
    int Damage;
    int APCost;
    std::string sound;
    
    std::string getName() const
    {
        return (name);
    }
    int getAPCost() const
    {
        return (APCost);
    }
    int getDamage() const
    {
        return (Damage);
    }
    void attack() const /* = 0 */
    {
        std::cout << sound;
    }
};

#endif