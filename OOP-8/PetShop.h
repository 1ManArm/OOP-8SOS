#pragma once
#include "Animal.h"

class PetShop {
	//�������, ����������, ��������� ���������� N-�� ���������
private:
	std::vector<Animal*>_animals;
public:
	void addAnimal(Animal* animal);

	void addAnimal();

	void deleteAnimal(std::string name);

	void changeAnimal(Animal* animal);
};