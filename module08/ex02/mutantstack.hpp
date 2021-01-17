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

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename C>
class MutantStack : public std::stack<C>
{
	public :

	MutantStack();
	MutantStack(const MutantStack& src);
	// Do i need this ? Pointers are compatible
	MutantStack(const std::stack<C>& src);
	~MutantStack();
	MutantStack&	operator=(const std::stack<C>& src);

	typedef typename std::stack<C>::container_type::iterator iterator;
	iterator		begin();
	iterator		end();
};

#endif