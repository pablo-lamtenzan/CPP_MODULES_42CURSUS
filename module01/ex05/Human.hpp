/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 04:33:33 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 05:04:18 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
    private :
    const Brain newBrain;
    
    public :
    Human();
    Brain getBrain()
    {
        return (newBrain);
    }
    std::string identify()
    {
        return (newBrain.identify());
    }
};


#endif