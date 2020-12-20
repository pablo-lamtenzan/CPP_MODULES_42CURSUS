/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 23:27:55 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 02:14:43 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <cstring>
#include <iostream>

class Pony
{
    private :

	std::string name;
    std::string color;
    std::string height;
    std::string fav_meal;

    public :

    Pony(std::string n, std::string c, std::string h, std::string fm);
	~Pony();
    const std::string get_name() const;
    const std::string get_color() const;
    const std::string get_height() const;
    const std::string get_fav_meal() const;
};

void        ponyOnTheHeap();
void        ponyOnTheStack();

#endif