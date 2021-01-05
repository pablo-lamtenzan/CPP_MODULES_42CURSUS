/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 07:56:09 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 08:19:34 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
    public :

    Ice();
    Ice(const AMateria& src);
    ~Ice();
    Ice&		operator=(const AMateria& src);
    AMateria* 	clone() const;
    void		use(ICharacter& traget);
};
