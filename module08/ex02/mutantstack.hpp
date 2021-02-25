/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:17:06 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 15:17:06 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <stack>

template < typename T, typename Container = std::deque<T> >
struct MutantStack : public std::stack<T, Container>
{
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	MutantStack() : std::stack<T>() { }
	MutantStack(const MutantStack& other) : std::stack<T>(other) { }
	~MutantStack() { }
	MutantStack&	operator=(const std::stack<T>& other)
	{
		std::stack<T>::operator=(other);
		return (*this);
	}
	iterator		begin() { return(std::stack<T, Container>::c.begin()); }
	iterator		end() { return(std::stack<T, Container>::c.end()); }
	const_iterator	begin() const { return(std::stack<T, Container>::c.begin()); }
	const_iterator	end() const { return(std::stack<T, Container>::c.end()); }
};
