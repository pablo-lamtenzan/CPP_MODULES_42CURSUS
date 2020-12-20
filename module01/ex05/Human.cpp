/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 04:33:10 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 05:56:21 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() : brain(Brain("31", "191", "20", "20")) { std::cout << "An Human has been created!" << std::endl; }
Human::~Human() { std::cout << "An Human has been destroyed!" << std::endl; }

Brain Human::get_brain() const { return (brain); }
std::string Human::identify() const { return (brain.identify()); }