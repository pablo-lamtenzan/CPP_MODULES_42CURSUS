/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 03:58:19 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 05:42:20 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain
{
    private :

    std::string age;
    std::string iq;
    std::string memory;
    std::string control;
	const void*const id;

    public :

    Brain();
    Brain(const std::string& a, const std::string& i, const std::string& m, const std::string& c);
    ~Brain();
    std::string identify() const;
    const std::string get_age() const;
    const std::string get_iq() const;
    const std::string get_memory() const;
    const std::string get_control() const;
};

#endif