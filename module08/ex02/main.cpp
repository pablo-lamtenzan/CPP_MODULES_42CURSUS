/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 13:30:50 by pablo             #+#    #+#             */
/*   Updated: 2021/02/25 11:06:04 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "mutantstack.hpp"
# include <vector>

/*
template <typename T>
std::ostream& operator<<(std::ostream& os, const MutantStack<T>& target)
{
	for (typename MutantStack<T>::iterator it = target.begin() ; it != target.end() ; it++)
		os << *it << " ";
	return (os);
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const MutantStack<const T>& target)
{
	for (typename MutantStack<const T>::const_iterator it = target.begin() ; it != target.end() ; it++)
		os << *it << " ";
	return (os);
}
*/

int main()
{
	// subject test

	MutantStack<int>    mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	// Better tests:

	// Copy constructor:

	std::cout << "(1) " << std::string(20, '-') << std::endl;

	// print src
	MutantStack<int> a(mstack);
	for (MutantStack<int>::iterator x = a.begin() ; x != a.end() ; x++)
		std::cout << *x << " ";
	std::cout << std::endl;
	// print dest
	for (MutantStack<int>::iterator x = mstack.begin() ; x != mstack.end() ; x++)
		std::cout << *x << " ";
	std::cout << std::endl;
	
	// Assignation

	std::cout << "(2) " << std::string(20, '-') << std::endl;

	MutantStack<int> b = a;
	for (MutantStack<int>::iterator x = b.begin() ; x != b.end() ; x++)
		std::cout << *x << " ";
	std::cout << std::endl;

	// Playing with iterators

	std::cout << "(3) " << std::string(20, '-') << std::endl;

	for (size_t i = 12 ; i > size_t() ; i--)
		b.push(i);

	MutantStack<int>::iterator q = b.begin();
	MutantStack<int>::iterator qq = b.end();

	for (size_t i = 3 ; i > 0 ; i--)
	{
		++q;
		--qq;
	}
	while (q != qq)
		std::cout << *(q++) << " ";
	std::cout << std::endl;
	
	// Using more types and const iterators

	std::cout << "(4) " << std::string(20, '-') << std::endl;

	MutantStack<std::string> w;
	w.push("1");
	w.push("2");
	w.push("3");
	w.push("deleted");
	w.pop();
	MutantStack<std::string>::const_iterator q1 = w.begin();
	MutantStack<std::string>::const_iterator q2 = w.end();
	while (q1 != q2)
		std::cout << *(q1++) << " ";
	std::cout << std::endl;

	return (0);
}