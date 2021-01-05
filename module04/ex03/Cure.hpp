/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 07:39:23 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 08:17:49 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
    public :

    Cure();
    Cure(const AMateria& src);
    ~Cure();
    Cure&			operator=(const AMateria& src);
	AMateria*		clone() const;
	void 			use(ICharacter& target);
};
