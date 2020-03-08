/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 04:33:33 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 16:56:01 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
    private:
    const Brain newBrain;
    
    public :
    
    // Constructors
    Human();

    // Destructors
    ~Human();

    // Shared methods
    Brain getBrain() const;
    std::string identify() const;
};


#endif