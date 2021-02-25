/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 20:29:50 by pablo             #+#    #+#             */
/*   Updated: 2021/02/24 14:37:47 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>

template<typename T>
void	iter(T* array, size_t size, void (&f)(const T&))
{
	for (size_t i = 0 ; i < size ; i++)
		f(array[i]);
}


