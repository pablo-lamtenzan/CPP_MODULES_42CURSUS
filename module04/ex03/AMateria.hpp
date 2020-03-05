/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 05:48:14 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 06:57:51 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria
{
    protected :

    unsigned int _xp;
    std::string __type;

    public :

    // Constructor
    AMateria(std::string const &type);
    AMateria();
    AMateria(const AMateria &src);

    // Destructors
    virtual ~AMateria();
    
    // Operators
    AMateria &operator= (AMateria const &src);

    // Shared Methods
    std::string const &getType() const ; //Returns the materia type
    unsigned int getXP() const; //Returns the Materia's XP

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif