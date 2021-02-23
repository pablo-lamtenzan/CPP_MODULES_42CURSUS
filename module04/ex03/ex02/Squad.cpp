/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 03:36:07 by plamtenz          #+#    #+#             */
/*   Updated: 2021/02/23 12:06:25 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : amount(0), squad(NULL) { }
Squad::Squad(const Squad &src) : amount(src.amount) { squad_dup(src); }
Squad::~Squad() { squad_clear(); }

Squad&	Squad::operator=(const Squad& src)
{
    if (this != &src)
    {
        amount = src.amount;
		squad_clear();
		squad_dup(src);
    }
    return (*this);
}

int	Squad::getCount() const { return (amount); }
ISpaceMarine*	Squad::getUnit(int n) const { return (n >= 0 && n < amount ? squad[n] : NULL); }

int	Squad::push(ISpaceMarine *SpaceMarine)
{
	// Check if is alreaddy pushed
	for (int i = 0 ; i < amount ; i++)
		if (SpaceMarine == squad[i])
		{
			std::cout << "Double push from " << SpaceMarine << std::endl;
			return (i);
		}
	
	// Realloc
	ISpaceMarine**	tmp = new ISpaceMarine*[amount + 1];
	if (squad)
	{
		for (int i = 0 ; i < amount ; i++)
			tmp[i] = squad[i];
		delete [] squad;
	}
	tmp[amount] = SpaceMarine;
	squad = tmp;
	return (++amount);
}

void	Squad::squad_dup(const Squad& src)
{
	ISpaceMarine* sp;

	for (int i = 0; i < src.getCount(); i++)
		push(sp = src.getUnit(i)->clone());
}

void	Squad::squad_clear()
{
	for (int i = 0; i < amount ; i++)
		delete squad[i];
	delete [] squad;
}
