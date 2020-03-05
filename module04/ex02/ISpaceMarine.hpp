/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 04:20:56 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 04:25:39 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEAMRINE_HPP

#include <iostream>
#include <string>
#include "TacticalMarine.hpp"

class ISpaceMarine
{
    public :

    // Methods 
    virtual TacticalMarine *clone() const = 0;
    virtual void battleCry() const = 0;
    virtual void rangedAtack() const = 0;
    virtual void meleeAttack() const = 0;
}

#endif
