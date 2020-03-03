/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:03:12 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 21:29:09 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public :
    
    HumanA(std::string name, Weapon weapon);

    Weapon *weapon;
    std::string name;
    
    void attack()
    {
        std::cout << name << " attacks with his " << weapon->type << '\n';
    }

    void setWeapon(Weapon newWeapon)
    {
        weapon = &newWeapon;
    }
};

#endif