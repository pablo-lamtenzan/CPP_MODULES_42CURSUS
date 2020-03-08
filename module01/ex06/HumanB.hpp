/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:19:15 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 17:16:07 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private :

    Weapon *__weapon;
    std::string __name;
    
    public :
    
    // Contructors
    HumanB(std::string name, Weapon weapon);
    HumanB(std::string name);

    // Destructors
    ~HumanB();
    
    // Shared methods
    void attack();
    void setWeapon(Weapon &newWeapon);
    std::string getName() const;
};

#endif
