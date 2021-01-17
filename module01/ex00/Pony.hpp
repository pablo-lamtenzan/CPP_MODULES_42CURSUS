/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 23:27:55 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/23 07:52:31 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <cstring>
#include <iostream>

class Pony
{
	std::string name;
    std::string color;
    std::string height;
    std::string fav_meal;

    public :

    Pony(const std::string& n, const std::string& c, const std::string& h, const std::string& fm);
	~Pony();
    const std::string& get_name() const;
    const std::string& get_color() const;
    const std::string& get_height() const;
    const std::string& get_fav_meal() const;
};

void        ponyOnTheHeap();
void        ponyOnTheStack();

#endif