/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:15:38 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 04:47:13 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <string>

class Enemy
{

	Enemy();
    std::string		type;
	int				hitpoints;	

    public :

    Enemy(int hp, const std::string& t);
    Enemy(const Enemy& src);
    virtual ~Enemy();
    Enemy&				operator=(const Enemy& shitpointsrc);
    const std::string&	getType() const;
    int					getHP() const;
	void				setHP(int hp);
    virtual void		takeDamage(int amount);
};
