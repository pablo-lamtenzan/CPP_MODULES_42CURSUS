/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:02:12 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 10:52:10 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{	
    public :

	PlasmaRifle();
    PlasmaRifle(const PlasmaRifle& src);
    ~PlasmaRifle();
    PlasmaRifle& operator=(const PlasmaRifle& src);
    virtual void attack(void) const;
};

#endif