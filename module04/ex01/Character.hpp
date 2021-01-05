/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:38:58 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 04:39:00 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
	Character();
    AWeapon*	weapon;
    int			ap;
    std::string name;

    public :

    Character(const std::string& n);
    Character(const Character& src);
    ~Character();
    Character&			operator=(const Character& src);
    int					getAP() const;
    AWeapon*			getWeapon() const;
    const std::string&	getName() const;
    void				recoverAP();
    void				equip(AWeapon* w);
    void				attack(Enemy* e);
};

std::ostream& operator<<(std::ostream& out, const Character& src);
