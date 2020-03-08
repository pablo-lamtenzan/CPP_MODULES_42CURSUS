/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:03:12 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 17:16:46 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private :

    Weapon *__weapon;
    std::string __name;
    
    public :
    
    // Contructors
    HumanA(std::string name, Weapon weapon);
    HumanA(std::string name);

    // Destructors
    ~HumanA();
    
    // Shared methods
    void attack();
    void setWeapon(Weapon &newWeapon);
    std::string getName() const;
};
#endif