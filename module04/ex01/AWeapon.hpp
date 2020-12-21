/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 06:36:54 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 09:03:56 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
    private :

	AWeapon();
    std::string		name;
    int				damage;
    int				ap_cost;

    public :

    AWeapon(std::string const& n, int ap, int dmg);
    AWeapon(const AWeapon& src);
    virtual ~AWeapon();
    AWeapon& operator=(const AWeapon& src);
    const std::string& getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
};

#endif