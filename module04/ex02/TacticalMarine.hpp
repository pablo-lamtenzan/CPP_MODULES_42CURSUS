/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 03:43:39 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 05:36:59 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public :

    TacticalMarine();
    TacticalMarine(const TacticalMarine& src);
    ~TacticalMarine();
    TacticalMarine&	operator=(const TacticalMarine& src);
    TacticalMarine*	clone() const;
    void 			battleCry() const;
    void 			rangedAttack() const;
    void 			meleeAttack() const;
};
