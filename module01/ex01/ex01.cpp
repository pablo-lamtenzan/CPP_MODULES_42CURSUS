/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 00:44:03 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/23 08:02:43 by pablo            ###   ########lyon.fr   */
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

int main() { memoryLeak(); return 0; }