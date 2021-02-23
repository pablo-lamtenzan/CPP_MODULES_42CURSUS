/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:02:12 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 04:28:09 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{	
    public :

	PlasmaRifle();
    PlasmaRifle(const AWeapon& src);
    ~PlasmaRifle();
    PlasmaRifle&	operator=(const AWeapon& src);
    void			attack(void) const;
};