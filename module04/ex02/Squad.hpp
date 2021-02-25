/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 03:28:07 by plamtenz          #+#    #+#             */
/*   Updated: 2021/02/23 15:40:47 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{

    int                	amount;
	ISpaceMarine**		squad;
	void 				squad_dup(const Squad& src);
	void				squad_clear();
	
    public :

    Squad();
    Squad(const Squad& src);
    ~Squad();
    Squad&			operator=(const Squad& src);
    int				getCount() const;
    ISpaceMarine*	getUnit(int n) const;
    int				push(ISpaceMarine*);
};
