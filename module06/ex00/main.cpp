/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 12:56:10 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/25 17:41:23 by pablo            ###   ########lyon.fr   */
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

int main(int ac, const char **argv)
{
    if (ac != 2)
    {
        std::cerr << "Error: Usage: convert < value >" << std::endl;
        return (1);
    }

    std::string x = argv[1];

    // Convert uppercases to lowercases
	for (size_t i = 0 ; i < x.length() ; i++)
		x.at(i) = std::tolower(x.at(i));

    // Check for abstract numbers
    bool isInf = x == "inf" || x == "-inf" || x == "+inf" || x == "nan" \
		|| x == "inff" || x == "+inff" || x == "-inff" || x == "nanf"; 
	
    // Check for hexadecimal format
    bool isHex = (x.compare(0, 2, "0x") == 0);

	// Check for octal format
	bool isOctal = (x.compare(0, 1, "0") == 0);

	// I little bit of 'ramdon' format error handling
	if (std::isdigit(x.at(0)) && (!isHex || !isOctal))
	{
		for (size_t i = 0 ; i < x.length() ; i++)
			if (!std::isdigit(x.at(i)) && x.at(i) != '.')
			{
				std::cerr << "Not valid input format" << std::endl;
				return (1);
			}
	}
    
	// Remove the 'f' form the floats
    if (!isHex && !isInf &&
            (x.find('f') != std::string::npos && x.length() - 1 == 'f'))
        x.substr(0, x.length() - 1);

	// MAX_SIZE container
    long double cast = 0;

	// Convert not digit ascci to int
	if (!isInf && std::isprint(x.at(0)) && !std::isdigit(x.at(0)))
	{
		if (x.length() == 1)
			cast = static_cast<int>(x.at(0));
		else
		{
			std::cerr << "Not a valid format!" << std::endl;
			return (1);
		}
	}
	else
	{
    	std::istringstream tmp(x);
		
    	// Check for octal format and convert to MAX_CONTAINER SIZE
    	if (isOctal)
    	{
    	    long octal;
			tmp >> std::oct >> octal;
			cast = octal;
    	}
		// Or just convert to MAX_CONTAINER SIZE
		else
			tmp >> cast;
	}
	
	// Char conversion:
    if (isinf(cast) || isnan(cast) || cast < CHAR_MIN || cast > CHAR_MAX)
        std::cout << "char: Impossible" << std::endl;
    else if (std::isprint(static_cast<char>(cast)))
		std::cout << "char: \'" << static_cast<char>(cast) << "\'" << std::endl;
    else
		std::cout << "char: Not displayable" << std::endl;

    // Integer conversion:
    if (isInf || isnan(cast) || cast > INT_MAX || cast < INT_MIN)
        std::cout << "int: imposible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(cast) << std::endl;

    // Floating point conversion:
    if (isInf || (isnan(cast) && (cast > FLT_MAX || cast < FLT_MIN)))
        std::cout << "float: nanf" << std::endl;
    else
        std::cout << "float: " << std::setprecision(1) << std::fixed \
		<< static_cast<float>(cast) << "f" << std::endl;

    // Double floating point conversion
    if (isInf || (isnan(cast) && (cast > FLT_MAX || cast < FLT_MIN)))
		std::cout << "double: nan" << std::endl;
	else
        std::cout << "double: " << std::setprecision(1) << std::fixed \
	<< static_cast<double>(cast) << std::endl;
	return (0);
}
