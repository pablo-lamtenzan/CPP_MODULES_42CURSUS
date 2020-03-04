/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:38:58 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 07:56:49 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "Enemy.hpp"
#include "AWaepon.hpp"

class Character
{
    private :

    AWeapon *weapon;
    int hp;
    int ap;
    std::string name;

    public :

    Character(std::string const & name);
    ~Character();
    
    void recoverAP()
    {
        if (ap <= 30 && ap >= 0)
            ap += 10;
    }

    void equip(AWeapon *_weapon)
    {
        weapon = _weapon;
        std::cout << name << " has " << ap << "of ap and wields a " << weapon->name << '/n';
    }

    void attack(Enemy *enemy)
    {
        if (!weapon)
            return ;
        ap = ap - weapon->ap > 0 ? ap - weapon->ap : 0;
        std::cout << name << "attacks " << enemy->type << " with a " << weapon->name << '\n';
        enemy->hp = enemy->hp - weapon->damage > 0 ? enemy->hp - weapon->damage : 0;
        if (!enemy->hp)
            enemy->~Enemy();
    }

    void status() // must do it wirh ostream operarator
    {
        if (!weapon)
        {
            std::cout << name << " has " << ap << "of ap and is unarmed\n";
        }
    }
    
    
};

#endif