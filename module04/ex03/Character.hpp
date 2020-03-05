/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 06:17:36 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 07:02:38 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private :

    std::string __name;
    AMateria *__stock[4];
    int __idx;

    public :
    
    // Constructor
    Character();
    Character(std::string &__name);
    Character(const Character &src);

    // Destructor
    virtual ~Character();

    // Operators
    Character &operator= (const Character &src);

    // Shared Methods
    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target) = 0;
};

#endif