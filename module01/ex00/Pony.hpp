/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 23:27:55 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 00:26:44 by plamtenz         ###   ########.fr       */
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
    public :
    Pony(std::string name, std::string color, std::string size, std::string magic);
    std::string color;
    std::string size;
    std::string magic;
    std::string name;
};

#endif