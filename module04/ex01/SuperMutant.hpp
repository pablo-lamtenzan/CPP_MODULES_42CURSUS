/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:23:36 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 07:35:09 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    private :

    public :
    
    SuperMutant();
    ~SuperMutant();

    //here take damage is diferent so if i have the same definition but diff content i could redefine and modify functions
};

#endif
