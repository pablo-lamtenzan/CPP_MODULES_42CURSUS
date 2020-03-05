/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 03:28:07 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 05:01:36 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad
{
    private :

    // Struct 
    typedef struct      s_container
    {
        ISpaceMarine    *unit;
        void            *next;
    }                   t_container;

    // Properties
    int                 __total;
    t_container         *__squad;

    // Methods
    char __InSquad(ISpaceMarine *SpaceMarine, t_container *container);
    void __CopyAllUnits(const Squad &src);
    void __DeleteAllUnits();
    
    
    public :

    // Constructors
    Squad();
    Squad(const Squad &src);
    
    // Destructor
    ~Squad();
    //add virtual destructor

    // Operators
    Squad &operator= (const Squad &src);

    // Methods
    virtual int getCount() const;
    virtual ISpaceMarine *getUnit(int n) const;
    virtual int push(ISpaceMarine *SpaceMarine) const;
};

#endif