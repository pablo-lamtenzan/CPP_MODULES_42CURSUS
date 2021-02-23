/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:32:21 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 04:37:15 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public :

	RadScorpion();
    RadScorpion(const Enemy& src);
    ~RadScorpion();
    RadScorpion&	operator=(const Enemy& src);
};