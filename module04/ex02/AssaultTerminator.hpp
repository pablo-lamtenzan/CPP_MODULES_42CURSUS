/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 04:11:33 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 05:34:23 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public : 

    AssaultTerminator();
    AssaultTerminator(const AssaultTerminator& src);
    ~AssaultTerminator();
    AssaultTerminator&	operator=(const AssaultTerminator& src);
    AssaultTerminator*	clone() const;
    void 				battleCry() const;
    void 				rangedAttack() const;
    void 				meleeAttack() const;
};
