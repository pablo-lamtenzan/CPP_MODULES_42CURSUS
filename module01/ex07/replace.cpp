/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 22:00:35 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/03 23:20:59 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **argv)
{
    char * filename;
    char *s1 = NULL;
    char *s2 = NULL;

    if (ac != 4)
        return (-1);
    
    s1 = argv[2];
    s2 = argv[3];
    filename = argv[1];

    if (!s1 || !s2)
        return (-1);


    std::ifstream fin(filename, std::ios_base::in);
    if (fin.open())
    {
        char readbytes[1024];
        while (fin.read(readbytes, 1024))
        {
            std::string str(readbytes); // dont know if that works without pushback
            std::replace(str.begin(), str.end(), s1, s2);
        }
        std::ofstream out(filename);
        out.write(str, strlen(str)) // this module is shit will bacj later not funny stuff 
        fin.close();
    }
    return (0);
}