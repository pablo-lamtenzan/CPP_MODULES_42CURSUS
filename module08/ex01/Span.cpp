/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:16:57 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 15:16:57 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"
# include <cstdlib>

Span::Span() : amount(0u), container() { }
Span::Span(unsigned int n) : amount(n), container() { }
Span::Span(const Span &src) : amount(src.get_amount()), container(src.get_container()) { }
Span::~Span() { }

Span&	Span::operator=(const Span& src)
{
	if (this != &src)
	{
		container = src.container;
    	amount = src.get_amount();
	}
    return (*this);
}

void	Span::addNumber(int num)
{
    if (container.size() >= amount)
        throw SpanException();
    container.push_back(num);
}

int		Span::shortestSpan() const
{
	if (container.size() <= 1)
		throw SpanException();

	// Get the min elem in vector
	const int min = *std::min_element(container.begin(), container.end());
	int		min2 = 0xfffffff;

	// Get the second min elem in vector
	for (size_t i = 0 ; i < container.size() ; i++)
		if (container.at(i) < min2 && container.at(i) > min)
			min2 = container.at(i);

	// Throw exeption if min2 hasn't been updated
	if (min2 == 0xfffffff && std::find(container.begin(), container.end(), 0xfffffff) == container.end())
		throw SpanException();

	// Return the diff
	return (min2 - min);
}

int		Span::longestSpan() const
{
    if (container.size() <= 1)
        throw Span::SpanException();

    return (*std::max_element(container.begin(), container.end()) \
			- *std::min_element(container.begin(), container.end()));
}

unsigned int			Span::get_amount() const { return (amount); }
const std::vector<int>&	Span::get_container() const { return (container); }

const char*				Span::SpanException::what() const throw() { return ("Error: not possible span."); }

void					Span::better_addNumber(int first, int last)
{
	const size_t size = abs(last - first);
	if (container.size() + size > amount)
		throw SpanException();
	std::vector<int> tmp(size);
	for (size_t i = 0 ; i < size ; i++)
		tmp.at(i) = first++;
	container.insert(container.end(), tmp.begin(), tmp.end());
}

void					Span::better_addNumber(size_t total)
{
	if (container.size() + total > amount)
		throw SpanException();
	std::vector<int> tmp(total);
	for (size_t i = 0 ; i < total ; i++)
		tmp.at(i) = rand();
	container.insert(container.end(), tmp.begin(), tmp.end());
}