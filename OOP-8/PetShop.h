#pragma once
#include "Animal.h"

class PetShop {
	//покупка, добавление, изменение параметров N-го животного
private:
	std::vector<Animal*>_animals;
public:
	void addAnimal(Animal* animal);

	void addAnimal();

	void deleteAnimal(std::string name);

	void changeAnimal(Animal* animal);
};