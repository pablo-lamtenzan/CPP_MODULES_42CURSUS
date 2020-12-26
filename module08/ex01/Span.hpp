/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:16:59 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 15:16:59 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class Span
{

    unsigned int		amount;
    std::vector<int>	container;
	Span();

    public :

    Span(unsigned int n);
    Span(const Span& src);
    ~Span();
    Span&	operator=(const Span& src);
    void	addNumber(int num);
    int		shortestSpan() const;
    int		longestSpan() const;
	unsigned int	get_amount() const;
	const std::vector<int>& get_container() const;

    class SpanException : public std::exception { const char *what() const throw(); };
};

#endif