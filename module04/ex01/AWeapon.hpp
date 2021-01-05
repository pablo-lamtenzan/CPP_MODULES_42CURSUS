/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 06:36:54 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 04:24:53 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <string>

class AWeapon
{
	AWeapon();
    std::string		name;
    int				damage;
    int				ap_cost;

    public :

    AWeapon(std::string const& n, int ap, int dmg);
    AWeapon(const AWeapon& src);
    virtual				~AWeapon();
    AWeapon&			operator=(const AWeapon& src);
    const std::string&	getName() const;
    int					getAPCost() const;
    int					getDamage() const;
    virtual void		attack() const = 0;
};

