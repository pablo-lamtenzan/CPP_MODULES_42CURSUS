/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:23:36 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 02:40:01 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public :
    
    // Constructors
    SuperMutant();
    SuperMutant(const SuperMutant &src);

    // Destructor
    ~SuperMutant();

    // Operators
    SuperMutant &operator= (const SuperMutant &src);

    // Methods
    virtual void takeDamage(int amounnt);
};

#endif
