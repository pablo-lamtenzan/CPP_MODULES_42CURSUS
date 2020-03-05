/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 03:43:39 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 04:25:52 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTIALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    private :

    public :

    // Constructors
    TacticalMarine();
    TacticalMarine(const TacticalMarine &src);

    // Destructors
    ~TacticalMarine();

    // Operators
    TacticalMarine &operator= (const TacticalMarine &src);

    // Methods
    virtual TacticalMarine *clone() const;
    virtual void battleCry() const;
    virtual void rangedAtack() const;
    virtual void meleeAttack() const;
};

#endif