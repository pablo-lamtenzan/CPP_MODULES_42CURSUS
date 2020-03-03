/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 04:31:12 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 05:15:43 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain(std::string _IQ, std::string _Energy, std::string _Age, std::string _Crazyness)
{
    IQ = _IQ;
    Energy = _Energy;
    Age = _Age;
    Crazyness = _Crazyness;
    id = (const void *)this;
}

Brain::Brain()
{
    id = (const void *)this;
}