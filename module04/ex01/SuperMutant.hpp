/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:23:36 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 09:51:00 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	private:
	
	SuperMutant();
	
    public :
    
    SuperMutant(const SuperMutant& src);
    ~SuperMutant();
    SuperMutant& operator=(const SuperMutant& src);
    virtual void takeDamage(int amount);
};

#endif
