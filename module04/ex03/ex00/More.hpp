/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   More.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 03:45:53 by pablo             #+#    #+#             */
/*   Updated: 2021/01/05 04:04:35 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Victim.hpp"

class More : public Victim
{
	More();

	public :

	More(const std::string& n);
	More(const Victim& src);
	~More();
	More&	operator=(const Victim& src);
	void	getPolymorphed() const;
};