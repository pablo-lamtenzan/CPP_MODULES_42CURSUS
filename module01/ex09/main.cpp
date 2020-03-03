/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 00:13:35 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 00:15:43 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main()
{
    Logger logg("filename");
    logg.log("cmd", "this is a mesage");
    logg.log("file", "this is a message");
    return (0);
}