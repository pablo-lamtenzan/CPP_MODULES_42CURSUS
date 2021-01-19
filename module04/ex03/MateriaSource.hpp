/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   MateriaSource.hpp                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: plamtenz <plamtenz@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/05 06:39:10 by plamtenz     #+#   ##    ##    #+#       */
/*   Updated: 2021/01/19 16:17:47 by plamtenz    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
# pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

    AMateria*	stock[4];
    int			idx;

    public :

    MateriaSource();
    MateriaSource(const MateriaSource& src);
    ~MateriaSource();
    MateriaSource &operator=(const MateriaSource& src);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const& type);
};
