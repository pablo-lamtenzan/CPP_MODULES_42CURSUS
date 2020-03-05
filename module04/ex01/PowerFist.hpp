/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:11:17 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 02:23:28 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public :
    
    // Constructors
    PowerFist();
    PowerFist(const PowerFist &src);

    // Destructors
    ~PowerFist();

    // Operators
    PowerFist &operator= (const PowerFist &src);

    // Methods
    virtual void attack() const;
};

#endif