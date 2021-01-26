/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 14:19:28 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/26 19:58:01 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

typedef struct	data
{
    std::string s1;
    int n;
    std::string s2;
}               Data;

void*		serialize(void)
{
	static const char alnum[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    std::srand(time(NULL));

    char *raw;

	// Allocate the total memory room
	try {
		raw = new char[sizeof(char) * 16ul + sizeof(int)];
	} catch(const std::bad_alloc& e) { std::cerr << e.what() << std::endl; return (NULL); }

	// Fill the first 8 bits with random alphanumeric chars
	for (size_t i = 0ul ; i < 8ul ; i++)
		raw[i] = alnum[rand() % (sizeof(alnum) - 1ul)];

    // Fill bit 8 to bit 8 + sizeof(int) with a random integer
    *reinterpret_cast<int *>(raw + 8ul) = rand();

    // Fill the remaining last 8 bits with 8 random alpahnumeric chars
    for (size_t i = 8ul + sizeof(int) ; i < 8ul + sizeof(int) + 8ul ; i++)
		raw[i] = alnum[rand() % (sizeof(alnum) - 1ul)];
    return (raw);
}

Data *deserialize(void * raw)
{
    Data *data;

	// Allocate the deseralise struct
	try {
		data = new Data();
	} catch (const std::exception& e) { std::cerr << e.what() << std::endl; return (NULL); }

    char *ptr = reinterpret_cast<char*>(raw);

    // Fill each elem of the struct with their restective data chunk
    data->s1 = std::string(ptr, 8ul);
    data->n = *reinterpret_cast<int*>(ptr + 8ul);
    data->s2 = std::string(ptr + sizeof(char) * 8ul + sizeof(int), 8ul);
    return (data);
}

int main()
{
    void *raw;
    Data *data;

    if (!(raw = serialize()) || !(data = deserialize(raw)))
		return (1);

    unsigned char *cp = reinterpret_cast<unsigned char*>(raw);

	
    std::cout << "Serialized data:" << std::endl << std::endl << "\"";

	for (size_t i = 0ul ; i < 8ul ; i++)
		std::cout << cp[i];
	std::cout << *reinterpret_cast<int*>(cp + 8ul);
	for (size_t i = 8ul + sizeof(int) ; i < 8ul + sizeof(int) + 8ul ; i++)
		std::cout << cp[i];
	
	std::cout << "\"" << std::endl << std::endl << "------------------------" << std::endl << std::endl;

    std::cout << "Deserialized data:" << std::endl << std::endl;

	std::cout << "s1: \"" << data->s1 << "\"" << std::endl;
	std::cout << "n:  " << std::dec << data->n << std::endl;
	std::cout << "s2: \"" << data->s2 << "\"" << std::endl;

    delete [] cp;
    delete data;
	std::cout << "EXIT" << std::endl;
	return (0);
}