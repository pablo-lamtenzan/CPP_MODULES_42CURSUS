/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:53:07 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 21:28:36 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    public :
    
    Weapon(std::string type);
    Weapon();
    
    const void *getType()
    {
        const void *reference = (const void *)&type;
        return (reference);
    }

    void setType(std::string newType)
    {
        type = newType; 
    }
    
    std::string type;
};

#endif