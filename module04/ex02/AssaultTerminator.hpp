/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 04:11:33 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 04:25:08 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    public :

    // Constructors
    AssaultTerminator();
    AssaultTerminator(const AssaultTerminator &src);

    // Destructors
    ~AssaultTerminator();

    // Operators
    AssaultTerminator &operator= (const AssaultTerminator &src);

    // Methods
    virtual TacticalMarine *clone() const;
    virtual void battleCry() const;
    virtual void rangedAtack() const;
    virtual void meleeAttack() const;
}

#endif