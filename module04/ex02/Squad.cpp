/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 03:36:07 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 07:21:04 by pablo            ###   ########lyon.fr   */
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
		/*if (squad)
		{
			for (int i = 0 ; i < amount ; i++)
			{
				bool found = false;
				for (int y = 0 ; y < src.getCount() ; y++)
				{
					if (src.getUnit(y) == squad[i])
						found = true;
				}
				if (!found)
					delete squad[i];
			}
			delete [] squad;
			squad = NULL;
		}*/
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
	{
		int t;
		int am = amount;
		if ((t = push(sp = src.getUnit(i)->clone())) != am + 1) // TEST THIS
		{
			std::cout << "tEst: errno push sp is in src:: " << t << i << std::endl;
			delete sp;
		}
		else
			std::cout << "XXXXxxxxxxxxx" << t << am << std::endl;
	}
}

void	Squad::squad_clear()
{
	for (int i = 0; i < amount ; i++)
		delete squad[i];
	delete [] squad;
}
