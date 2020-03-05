/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 06:35:36 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/05 08:06:16 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class ImateriaSource
{
    public :
    
    // Shared Methods
    virtual ~IMateriaSource(){return ;}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
}

#endif