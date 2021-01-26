/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 20:19:47 by pablo             #+#    #+#             */
/*   Updated: 2021/01/26 20:46:43 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

template <typename T>
void	swap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T&		max(T& a, T& b)
{
    return (a > b ? a : b);
}

template <typename T>
T&		min(T& a, T& b)
{
    return (a < b ? a : b);
}
