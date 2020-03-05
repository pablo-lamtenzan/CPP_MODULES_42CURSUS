/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 07:39:23 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 07:59:13 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public :

    // Constructor
    Cure();
    Cure(const Cure &src);

    // Destructors
    ~Cure();

    // Operators
    Cure &operator= (const Cure &src);

    // Shared Methods
    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};

#endif