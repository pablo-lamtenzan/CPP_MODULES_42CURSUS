/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:38:58 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 02:59:28 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
    private :

    AWeapon *__weapon;
    int __ap;
    std::string __name;

    public :

    // Constructors
    Character(std::string const & name);
    Character();
    Character(const Character &src);

    // Destructors
    ~Character();

    // Operators

    Character &operator= (const Character &src);
    
    // Methods
    int getAP() const;
    AWeapon *getWeapon() const;
    const std::string getName() const;
    void recoverAP();
    void equip(AWeapon *weapon);
    void attack(Enemy *Enemy);
};

std::ostream &operator<< (std::ostream &out, const Character &src);

#endif
