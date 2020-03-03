/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 03:58:19 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 05:19:53 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain
{
    public :
    Brain(std::string IQ, std::string Energy, std::string Age, std::string Crazyness);
    Brain();
    std::string IQ;
    std::string Energy;
    std::string Age;
    std::string Crazyness;
    const void *id;

    std::string identify() const // const used for const class Brain
    {
        std::ostringstream address;
        address << id;
        return (address.str());
    }
};

#endif