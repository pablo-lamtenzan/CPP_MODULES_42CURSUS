/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:38:58 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 10:30:01 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
    private :

	Character();
    AWeapon*	weapon;
    int			ap;
    std::string name;

    public :

    Character(std::string const& n);
    Character(const Character& src);
    ~Character();

    Character&			operator= (const Character& src);
    int					getAP() const;
    AWeapon*			getWeapon() const;
    const std::string&	getName() const;
    void				recoverAP();
    void				equip(AWeapon* w);
    void				attack(Enemy* e);
};

std::ostream& operator<< (std::ostream& out, const Character& src);

#endif
