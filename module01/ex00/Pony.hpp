/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 23:27:55 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 15:46:54 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <cstring>
#include <iostream>


void        ponyOnTheHeap();
void        ponyOnTheStack();

class Pony
{
    private :

    std::string __color;
    std::string __size;
    std::string __magic;
    std::string __name;

    public :

    // Shared methods
    
    Pony(std::string name, std::string color, std::string size, std::string magic);
    std::string getColor() const;
    std::string getSize() const;
    std::string getMagic() const;
    std::string getName() const;
};

#endif