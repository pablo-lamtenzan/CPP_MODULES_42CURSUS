/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:09:40 by plamtenz          #+#    #+#             */
/*   Updated: 2021/02/24 14:28:49 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Base { virtual ~Base(){} };
struct A : public Base { };
struct B : public Base { };
struct C : public Base { };

/*
** Dynamic cast to pointer return NULL in case if failure.
*/

void		identify_from_pointer(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type is A!" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type is B!" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type is C!" << std::endl;
	else
		std::cerr << "Unknown type..." << std::endl;
}

/*
** Dynamic cast to reference thows a bad cast exection in case of failure.
** bad cast is included in typeinfo so i can't use it ... (subject rules)
*/

void		identify_from_reference(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Type is A!" << std::endl;
	}
	catch(std::exception& e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "Type is B!" << std::endl;
		}
		catch(std::exception& e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "Type is C!" << std::endl;
			}
			catch (std::exception& e) { std::cerr << "Unknown type..." << std::endl; }
		}
	}
}


int main()
{
	A a = A();
	B b = B();
	C c = C();

	identify_from_pointer(&a);
	identify_from_pointer(&b);
	identify_from_pointer(&c);
	
	identify_from_reference(a);
	identify_from_reference(b);
	identify_from_reference(c);

	std::cout << "EXIT" << std::endl;
	return (0);
}
