/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   MateriaSource.cpp                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: plamtenz <plamtenz@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/05 06:47:00 by plamtenz     #+#   ##    ##    #+#       */
/*   Updated: 2021/01/19 16:17:57 by plamtenz    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : idx(0)
{
    for (size_t i = 0 ; i < sizeof(stock) / sizeof(*stock) ; i++)
		stock[i] = NULL;
	std::cout << "An empty MateriaSource has been created!" <<std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	operator=(src);
	std::cout << "A new MateriaSource has been created!" <<std::endl;
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0 ; i < sizeof(stock) / sizeof(*stock) ; i++)
		delete stock[i];
	std::cout << "A MateriaSource has been destroyed!" <<std::endl;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& src)
{	
    if (this != &src)
    {
        idx = src.idx;
		for (size_t i = 0 ; i < sizeof(stock) / sizeof(*stock) ; i++)
			delete stock[i];
        for (size_t i = 0 ; i < sizeof(stock) / sizeof(*stock) ; i++)
			learnMateria(src.stock[i]->clone());
    }
    return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
    if (idx >= 0 && static_cast<size_t>(idx) < sizeof(stock) / sizeof(*stock))
	{
		size_t i = -1;
		while (++i < sizeof(stock) / sizeof(*stock) && stock[i])
			;
        stock[i] = m;
		idx++;
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (size_t i = 0 ; i < sizeof(stock) / sizeof(*stock) ; i++)
		if (stock[i]->getType() == type)
			return (stock[i]->clone());
	return (NULL);
}