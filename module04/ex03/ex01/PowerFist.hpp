/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:11:17 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 04:28:44 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{	
    public :
    
	PowerFist();
    PowerFist(const AWeapon& src);
    ~PowerFist();
    PowerFist&		operator=(const AWeapon& src);
    void 			attack() const;
};
