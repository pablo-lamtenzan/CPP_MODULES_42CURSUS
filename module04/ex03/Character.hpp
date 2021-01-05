/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 06:17:36 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 08:31:58 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private :

    std::string	name;
    AMateria*	stock[4];
    int			idx;

    public :
    
    Character();
    Character(const std::string& n);
    Character(const Character& src);
    virtual ~Character();
    Character &operator=(const Character& src);
    std::string const& getName() const;
    void equip(AMateria* m);
    void unequip(int i);
    void use(int i, ICharacter& target);
	int get_idx() const;
};
