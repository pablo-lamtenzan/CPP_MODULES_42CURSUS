/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:52:52 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 06:24:44 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include "Peon.hpp"

class Victim
{
    public :

    Victim(std::string name);
    Victim();
    ~Victim();

    std::string name;

    void introduce_hisself()
    {
        std::cout << "I'm " << name << " and I like otters!\n";
    }

    void getPolymorphed() const
    {
        std::cout << name << " has been urned into a cute little sheep!\n";
    }
};

#endif