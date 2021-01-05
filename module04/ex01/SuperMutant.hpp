/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:23:36 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 05:06:15 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "Enemy.hpp"

class SuperMutant : public Enemy
{	
    public :
    
	SuperMutant();
    SuperMutant(const Enemy& src);
    ~SuperMutant();
    SuperMutant&	operator=(const Enemy& src);
    void			takeDamage(int amount);
};

