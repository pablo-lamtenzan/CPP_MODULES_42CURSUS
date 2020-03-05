/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 03:36:07 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 05:09:12 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

// Constructors

Squad::Squad()
{
    this->__total = 0;
    this->__squad = NULL;
    return ;
}

Squad::Squad(const Squad &src)
{
    this->__CopyAllUnits(src);
    this->__total = src.__total;
    return ;
}

// Destructor

Squad::~Squad()
{
    this->__DestroyAllUnits();
    return ;
}

Squad
&Squad::operator= (const Squad &src)
{
    if (this != &src)
    {
        this->__DeleteAllUnits();
        this->__CopyAllUnits(src);
        this->__total = src.__total;
    }
    return (*this);
}

// Methods

int
Squad::getCount() const
{
    return (this->__total);
}

ISpaceMarine
*Squad::getUnit(int n) const
{
    t_container *tmp = this->__squad;
    if (n >= 0 && n < this->__total)
    {
        while (n-- > 0)
            tmp = tmp->next;
        return (tmp->unit);
    }
    return (NULL);
}

int
Squad::push(ISpaceMarine *SpaceMarine)
{
    t_container *tmp = this->__squad;
    if (SpaceMarine && this->__InSquad(SpaceMarine, tmp))
        return (this->__total);
    tmp = this->__squad;
    if (tmp)
    {
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = new t_container;
        tmp->next->unit = SpaceMarine;
        tmp->next->next = NULL;
    }
    else
    {
        this->__squad = new t_container;
        this->__squad->unit = SpaceMarine;
        this->__squad->next = NULL;
    }
    return (this->__total + 1);
}

char
Squad::__InSquad(ISpaceMarine *SpaceMarine, t_container *container)
{
    if (!conatiner)
        return (0);
    else if (SpaceMarine == container->unit)
        return (1);
    else
        return (this->__InSquad(SpaceMarine, conatiner->next));
}

void
Squad::__CopyAllUnits(const Squad &src)
{
    int i = -1;
    while (++i < src.getCount())
        this->push(src.getUnit(i));
    return ;
}

void
Squad::__DeleteAllUnits()
{
    t_container *tmp;

    if (this->__squad)
        return ;
    delete this->__squad->unit;
    tmp = this->__squad;
    this->__squad = this->__squad->next;
    delete tmp;
    return (this->__DeleteAllUnits()); // didnt know i can return a void function in a void function
}