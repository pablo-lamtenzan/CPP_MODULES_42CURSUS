/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:17:03 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 15:17:03 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename C>
MutantStack<C>::MutantStack() { }

template <typename C>
MutantStack<C>::MutantStack(const MutantStack& src) : std::stack<C>(src) { }

template <typename C>
MutantStack<C>::MutantStack(const std::stack<C>& src) : std::stack<C>(src) { }

template <typename C>
MutantStack<C>& MutantStack<C>::operator=(const std::stack<C>& src) { return (std::stack<C>::operator=(src)); }

template <typename C>
typename std::stack<C>::container_type::iterator MutantStack<C>::begin() { return (this->c.begin()); }

template <typename C>
typename std::stack<C>::container_type::iterator MutantStack<C>::end() { return (this->c.end()); }