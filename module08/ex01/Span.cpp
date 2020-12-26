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

Span::Span() : amount(0), container() { }
Span::Span(unsigned int n) : amount(n), container() { }
Span::Span(const Span &src) : amount(src.get_amount()), container(src.get_container()) { }
Span::~Span() { }

Span&	Span::operator=(const Span& src)
{

	container = src.container;
    amount = src.get_amount();
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
	int		min2 = INT32_MAX;

	// Get the second min elem in vector
	for (size_t i = 0 ; i < container.size() ; i++)
		if (container[i] < min2 && container[i] > min)
			min2 = container[i];

	// Throw exeption if min2 hasn't been updated
	if (min2 == INT32_MAX && std::find(container.begin(), container.end(), INT32_MAX) == container.end())
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
