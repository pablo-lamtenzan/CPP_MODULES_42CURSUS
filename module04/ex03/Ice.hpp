/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 07:56:09 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 07:59:47 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CPP
# define ICE_CPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public :

    // Constructor
    Ice();
    Ice(const Ice &src);

    // Destructor
    ~Ice();

    // Operator
    Ice &operator= (const Ice &src);

    // Shared Methods
    virtual AMateria *clone() const;
    virtual void use(ICharacter &traget);
};

#endif