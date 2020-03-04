/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 05:45:14 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 06:24:35 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
    public :
    Sorcerer(std::string name, std::string title);
    ~Sorcerer();

    std::string name;
    std::string title;

    void introduce_himself()
    {
        std::cout << "I am " << name << ", " << title << ", and i like ponies!\n";
    }

    void polymorph(Victim const &target) const
    {
        target.getPolymorphed();
    }
};

#endif