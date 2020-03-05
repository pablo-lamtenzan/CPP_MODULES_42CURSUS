/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 04:29:44 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 04:31:03 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include <iostream>
#include <string>

class ISquad
{
    public :

    // Methods
    virtual int getCount() const = 0;
    virtual ISpaceMarine *getUnit(int n) const = 0;
    virtual int push(ISpaceMarine *SpaceMarine) const = 0;
}

#endif