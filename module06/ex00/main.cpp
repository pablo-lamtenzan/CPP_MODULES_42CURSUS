/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 12:56:10 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 19:23:39 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <cfloat>
#include <cctype>

int main(int ac, char **argv)
{
    // Check valid arg number
    if (ac != 2)
    {
        std::cout << "Usage error : Not valid input" << std::endl;
        return (0);
    }

    std::string x = argv[1];

    // Remove the upercases from input converting to lowercases
    int i = -1;

    while(++i < x.length())
        x.at(i) = std::tolower(x.at(i));
    // Now if is abstract (+-inf)
    bool isInf = (x.compare(0, x.length(), "inf") == 0)
            || (x.compare(0, x.length(), "-inf") == 0)
            || (x.compare(0, x.length(), "+inf") == 0);
    // Special integer format (hex, point, octal)
    bool isHex = (x.compare(0, 2, "0x") == 0);
    bool isPoint = (x.find('.') != std::string::npos); // npos nomenclature 'not match'
    bool isOctal = (x.compare(0, 1, "0") == 0);
    // Remove 'f' if is not an hexa format integer or +-inf
    if (!isHex && !isInf &&
            (x.find('f') != std::string::npos && x.length() - 1 == 'f'))
        x.substr(0, x.length() - 1);

    long double cast;
    // Check if is a char
    if (x.at(0) == '\'' && x.at(2) == '\'')
        cast = static_cast<int>(x.at(1));
    else
    {
        std::istringstream tmp(x);
        // Check if octal
        if (isOctal)
        {
            long octal;
			tmp >> std::oct >> octal; // octal to int
			cast = octal;
        }
        // Other cases
        else
            tmp >> cast;
    }
// Casting:
    // Convert chars
    if (isinf(cast) || isnan(cast) || cast < CHAR_MIN || cast > CHAR_MAX)
        std::cout << "char: Impossible" << std::endl;
    else if (std::isprint(static_cast<char>(cast)) != 0)
		std::cout << "char: '" << static_cast<char>(cast) << "'" << std::endl;
    else
		std::cout << "char: Not displayable" << std::endl;
    // Convert ints
    if (isInf || isnan(cast) || cast > INT_MAX || cast < INT_MIN)
        std::cout << "int: imposible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(cast) << std::endl;
    // Convert floats
    if (isInf || (isnan(cast) && (cast > FLT_MAX || cast < FLT_MIN)))
        std::cout << "float: nanf" << std::endl;
    else
        std::cout << "float: " << std::setprecision(1) << std::fixed
		<< static_cast<float>(cast) << "f" << std::endl;
    // Convert doubles
    if (isInf || (isnan(cast) && (cast > FLT_MAX || cast < FLT_MIN)))
        std::cout << "double: nan" << std::endl;
    else
        std::cout << "double: " << std::setprecision(1) << std::fixed
		<< static_cast<double>(cast) << std::endl;
}
