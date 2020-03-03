/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 23:50:51 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 00:11:54 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <iostream>
#include <fstream>
#include <chrono>
#include <ctime>

class Logger
{
    private :

    void        logToConsole(std::string str)
    {
        std::cout << str;
    }

    void        logToFile(std::string str)
    {
        std::ofstream file;
        file.open(filename);
        if (file.is_open())
        {
            file << str;
            file.close();
        }
    }

    std::string makeLogEntry(std::string message)
    {
        std::string date;
        auto start = std::chrono::system_clock::now();
        auto end = std::chrono::system_clock::now();
        std::time_t end_time = std::chrono::system_clock::to_time_t(end);
        date = (std::string)(std::ctime(&end_time));
        date += message;
        return (date);
    }
    
    public :

    Logger(std::string filename);

    std::string filename;

    void log(std::string const &dest, std::string const &message)
    {
        /* like ex09 need and example to know how to do it */
    }
};

#endif