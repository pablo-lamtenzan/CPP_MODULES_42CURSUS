/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:53:07 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/23 08:31:26 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private :

    std::string type;
    
    public :
    
    Weapon(const std::string& t);
    Weapon();
    ~Weapon();
    const std::string& getType() const;
    void setType(const std::string& newType);
};

#endif