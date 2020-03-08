/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 14:19:28 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 19:30:08 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <random>

typedef struct data
{
    std::string s1;
    int n;
    std::string s2;
}               Data;

void *serialize(void)
{
    // random generator init
    std::srand(time(NULL));

    // dest, src
    char *raw;
    if (!(raw = new char[sizeof(char) * 16 + sizeof(int)]))
        return (NULL);
    char alnum[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i = -1;
    // 1st 8 bits (char * 8)
    while (++i < 8)
        raw[i] = alnum[rand() % 62];
    // 2nd 16 bits (int * 4)
    *reinterpret_cast<int *>(raw + 8) = rand();
    i = -1;
    while (++i < 8)
        raw[i + sizeof(char)  8 + sizeof(int)] = alnum[rand() % 62];
    return (raw);
}

Data *deserialize(void * raw)
{
    Data *data;
    if (!(data = new Data()))
        return (NULL);
    char *ptr = reinterpret_cast<char *>(raw);
    // fill data in struct
    data->s1 = std::string(ptr, 8);
    data->n = *reinterpret_cast<int *>(ptr + 8);
    data->s2 = std::string(ptr + sizeof(char) * 8 + sizeof(int), 8);
    return (data);
}

int main()
{
    void *raw;
    Data *data;
    if (!(raw = serialize()) || !(data = deserialize(raw)))
    {
        std::cout << "Memory allocation failed" << std::endl;
        return (0);
    }
    unsigned char *cp = reinterpret_cast<unsigned char *>(raw);
    std::cout << "Serialize data" << std::endl;
    int i = -1;
    while (++i < 16 + sizeof(int))
        std::cout << std::hex << std::showbase << + cp[i] << " ";
    std::cout << std::endl << std::endl;
    std::cout << "Deserialized data:" << std::endl;
	std::cout << "s1: \"" << data->s1 << "\"" << std::endl;
	std::cout << "n:  " << std::dec << data->n << std::endl;
	std::cout << "s2: \"" << data->s2 << "\"" << std::endl;
    delete cp;
    delete data;
}