/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:31:26 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/09 22:32:46 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat A("A", 1);
    Bureaucrat B("B", 149);
    Bureaucrat C("C", 149);

    B.DecrementGrade();
    std::cout << A << B << C;
    //A.IncrementGrade();
}