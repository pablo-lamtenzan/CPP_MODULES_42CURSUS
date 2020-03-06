/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:31:26 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/06 07:32:21 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat A("A", 1);
    Bureaucrat B("A", 0);
    Bureaucrat C("A", 151); // mmm this is strange;

    //A.IncrementGrade();
    A.DecrementGrade();
    std::cout << A.getGrade() << A << B << C;
}