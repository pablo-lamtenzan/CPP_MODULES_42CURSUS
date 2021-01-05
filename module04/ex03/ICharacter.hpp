/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 06:12:22 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 08:32:23 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
    public :
    
    virtual ~ICharacter() {}
    virtual const std::string& getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int i) = 0;
    virtual void use(int i, ICharacter& target) = 0;
};
