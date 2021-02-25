/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 12:56:10 by plamtenz          #+#    #+#             */
/*   Updated: 2021/02/24 14:19:05 by pablo            ###   ########lyon.fr   */
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

// TO DO: Find how write octal format here

static int ft_error()
{
	std::cerr << "Not valid input format" << std::endl;
	return (1);
}

static size_t count_chars(char c, const std::string& target)
{
	size_t counter = 0;

	for (size_t i = 0 ; i < target.length() ; i++)
	{
		if (target.at(i) == c)
			counter++;
	}
	return (counter);
}

int main(int ac, const char **argv)
{
    if (ac != 2)
    {
        std::cerr << "Error: Usage: convert < value >" << std::endl;
        return (1);
    }

    std::string x = argv[1];

	// Check if the value is an char uppercase
	bool upper = x.length() == 1 && x.at(0) <= 'Z' && x.at(0) >= 'A';

	// here check for neg and remove it (neg chars are not printable not need to handle if i don't want)

    // Convert uppercases to lowercases
	for (size_t i = 0 ; !upper && i < x.length() ; i++)
		x.at(i) = std::tolower(x.at(i));

	// Check for string starting by '-'
	bool neg = x.at(0) == '-' && x.length() > 1;

    // Check for abstract numbers
    bool isInf = x == "inf" || x == "-inf" || x == "+inf" || x == "nan" \
		|| x == "inff" || x == "+inff" || x == "-inff" || x == "nanf"; 
	
    // Check for hexadecimal format
    bool isHex = (x.compare(0, 2, "0x") == 0);

	// Check for octal format
	bool isOctal = x.at(0) == 'O';

	// Handle negative octal or hexa
	if (neg && ((x.compare(1, 2, "0x") == 0) || (x.compare(1, 1, "O") == 0)))
		return (ft_error());

	size_t point;

	// Check if the input could be corrupted with more than 1 point
	if (((point = count_chars('.', x)) > 1) || (point && (isHex || isOctal)))
		return (ft_error());
	
	// Remove the 'f' form the floats
    if (!isInf && (x.find('f', x.length() - 1) != std::string::npos) && x.length() > 1)
	{
		// Check if there's only 1 point before the 'f'
		if (point != 1 || isHex || isOctal)
			return (ft_error());
		x = x.substr(0, x.length() - 1);
	}

	if ((neg && count_chars('-', x) != 1) || (count_chars('-', x) && (isHex || isOctal)))
		return (ft_error());

	// I little bit of 'ramdon' format error handling
	if (std::isdigit(x.at(0)) && !isHex && !isOctal)
	{
		for (size_t i = 0 ; i < x.length() ; i++)
		{
			if (i == 0 && neg)
				continue ;
			if (!std::isdigit(x.at(i)) && x.at(i) != '.')
				return (ft_error());
		}
	}

	// MAX_SIZE container
    long double cast = 0;
	// Convert not digit ascci to int
	if (!neg && !isInf && std::isprint(x.at(0)) && !std::isdigit(x.at(0)))
	{
		if (x.length() == 1)
			cast = static_cast<int>(x.at(0));
		else
			return (ft_error());
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
		// Check for hexadecimal format and convert to MAX_CONTAINER SIZE
		else if (isHex)
		{
			long hexa;
			tmp >> std::hex >> hexa;
			cast = hexa;
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
