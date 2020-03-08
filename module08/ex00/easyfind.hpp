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

#include <iostream>
# include <exception>

class NotMatchException : public std::exception
{
    public :

    // Shared Methods
    virtual const char *what() const throw();
};

const char
*NotMatchException::what() const throw()
{
    return ("Not match for the given integer in container\n");
}

template <typename T>
int &easyfind(T t, int i)
{
    typename T::iterator f;
    if ((f = std::find(t.begin(), t.end(), i)) == t.end())
        throw NotMatchException();
    return (*f);
}       

#endif