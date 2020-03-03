/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:19:15 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 21:36:24 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public :
    
    HumanB(std::string name, Weapon weapon);
    HumanB(std::string name);

    Weapon *weapon;
    std::string name;
    
    void attack()
    {
        std::cout << name << " attacks with his " << weapon->type << '\n';
    }

    void setWeapon(Weapon& newWeapon) //takes addr of argument
    {
        weapon = &newWeapon;
    }
};

#endif
