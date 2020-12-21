/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 07:15:38 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/21 09:47:52 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
    private:

	Enemy();
    std::string		type;
	int				hitpoints;	

    public :

    Enemy(int hp, std::string const& t);
    Enemy(const Enemy& src);
    virtual ~Enemy();
    Enemy&				operator=(const Enemy& shitpointsrc);
    const std::string&	getType() const;
    int					getHP() const;
	void				setHP(int hp);
    virtual void		takeDamage(int amount);
};

#endif