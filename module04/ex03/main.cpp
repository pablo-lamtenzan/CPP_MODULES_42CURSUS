#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	// Test initialisation and learMateria
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	std::cout << std::endl;

	// Test create materia
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;

	// Test use materia 
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	// Test ressources destruction and deletion
	std::cout << std::endl << "EXIT" << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}