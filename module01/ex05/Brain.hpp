/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 03:58:19 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 16:55:08 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain
{
    private :

    std::string __IQ;
    std::string __Energy;
    std::string __Age;
    std::string __Crazyness;

    protected :

    const void *__id;

    public :
    
    // Contructors
    Brain();
    Brain(std::string IQ, std::string Energy, std::string Age, std::string Crazyness);

    ~Brain();

    // Shared Methods
    std::string identify() const;
    std::string getIQ() const;
    std::string getEnergy() const;
    std::string getAge() const;
    std::string getCrazyness() const;
};

#endif