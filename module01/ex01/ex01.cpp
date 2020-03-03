/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 00:44:03 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 00:46:41 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

void memoryLeak()
{
    std::string*        panther = new std::string("String panther");
    std::cout << *panther << std::endl;
    delete panther;
}