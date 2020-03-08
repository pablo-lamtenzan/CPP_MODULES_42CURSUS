/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 22:00:35 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 18:12:20 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char **argv)
{
    // Check input errors
    if (ac != 4)
    {
        std::cout << "Usage error, bad format" << std::endl;
        return (-1);
    }
    std::string _find = argv[2];
    std::string _replace = argv[3];
    std::string filename = argv[1];

    if (!_find.length() || !_replace.length() || !_replace.length())
    {
        std::cout << "Usage error, bad format" << std::endl;
        return (-1);
    }
    // Open check filename
    std::ifstream fs(filename);
    if (!fs.good())
    {
        std::cout << "Not openable file" << std::endl;
        return (-1);
    }
    // Read all the input file and but the read bytes in a buffer
    std::stringstream buff;
    std::string buff_in_string_type;
    buff << fs.rdbuf();
    buff_in_string_type = buff.str();
    // Replace
    size_t match;
    while ((match = buff_in_string_type.find(_find)) != std::string::npos) // if i forget the day of the evaluation npos (max size_t) in nomenclature for not find
        buff_in_string_type.replace(match, _find.length(), _replace);
    // Rewrite the file
    std::ofstream of(filename + ".replace");
    if (!of.good())
    {
        std::cout << "Not openable file" << std::endl;
        return (-1);
    }
    of << buff_in_string_type;
    // close
    of.close();
    return (0);
}