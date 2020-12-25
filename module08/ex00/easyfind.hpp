/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:16:20 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 15:16:20 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>

class NotMatchException : public std::exception { const char* what() const throw() { return ("Error: no match."); } };
class EmptyException : public std::exception { const char* what() const throw() { return ("Error: container is empty."); } };


template <class T>
int 	easyfind(T& t, int value)
{
	if (t.empty())
		throw EmptyException();
	typename T::iterator i;
	if ((i = std::find(t.begin(), t.end(), value)) == t.end())
		throw NotMatchException();
	return (*i);
}       

#endif