/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:53:07 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 17:04:46 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private :

    std::string __type;
    
    public :
    
    // Constructors
    Weapon(std::string type);
    Weapon();

    // Destructors
    ~Weapon();
    
    // Shared Methods
    const std::string &getType() const;
    void setType(std::string newType);
};

#endif