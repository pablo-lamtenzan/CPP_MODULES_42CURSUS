/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 05:48:14 by plamtenz          #+#    #+#             */
/*   Updated: 2021/02/23 11:59:32 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ICharacter.hpp"

struct ICharacter;

class AMateria
{
    unsigned int	_xp;
    std::string		type;

    public :

	AMateria();
    AMateria(std::string const& type);
    AMateria(const AMateria& src);
    virtual ~AMateria();
    AMateria&			operator=(AMateria const& src);
    const std::string&	getType() const ; //Returns the materia type
    unsigned int		getXP() const; //Returns the Materia's XP
    virtual AMateria* 	clone() const = 0;
    virtual void 		use(ICharacter& target);
	void				setXp(unsigned int xp);
};
