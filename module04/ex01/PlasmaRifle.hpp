/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:02:12 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 02:13:24 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public :

    // Constructors
    PlasmaRifle();
    PlasmaRifle(const PlasmaRifle &src);

    // Destructors
    ~PlasmaRifle();

    // Operators
    PlasmaRifle &operator= (const PlasmaRifle &src);

    // Methods
    virtual void attack(void) const;
};

#endif