#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	// Test IMateriaSource test
	MateriaSource* src1 = new MateriaSource();
	src1->learnMateria(new Ice());
	src1->learnMateria(new Cure());
	MateriaSource src2 = *src1;
	IMateriaSource* src3 = new MateriaSource();
	src3->learnMateria(new Cure());

	std::cout << std::endl;

	// Test create Materia
	AMateria* ice = src2.createMateria("ice");
	AMateria* heal = src3->createMateria("cure");

	std::cout << std::endl;

	// Test init a new character and equip
	Character *ch1 = new Character("ch1");
	ch1->equip(ice);
	Character ch2 = *ch1;
	ch2.equip(heal);
	ICharacter* ch3 = new Character("ch3");
	ch3->equip(heal);

	std::cout << std::endl;

	// Use the Materia
	ch1->use(0, ch2);
	ch2.use(0, *ch1);
	ch2.use(1, *ch1);
	ch3->use(0, ch2);

	std::cout << std::endl;

	// Test wrong use of materia

	ch1->use(4, ch2);
	ch1->use(12, ch2);

	std::cout << std::endl << "EXIT" << std::endl;

	// Free ressources

	std::cout << std::endl << "EXIT" << std::endl;

	delete src1;
	delete src3;
	delete ch1;
	delete ch3;

	return (0);
}
