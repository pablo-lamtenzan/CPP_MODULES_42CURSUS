/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:32:21 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 02:47:16 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public :

    // Constructors
    RadScorpion();
    RadScorpion(const RadScorpion &src);

    // Destructors
    ~RadScorpion();

    // Operators
    RadScorpion &operator= (const RadScorpion &src);
};

#endif