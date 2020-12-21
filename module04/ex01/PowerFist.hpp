/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:11:17 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 10:52:49 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{	
    public :
    
	PowerFist();
    PowerFist(const PowerFist& src);
    ~PowerFist();
    PowerFist& operator=(const PowerFist& src);
    virtual void attack() const;
};

#endif