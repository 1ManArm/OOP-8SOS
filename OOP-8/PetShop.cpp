#include "PetShop.h"
#include "Animal.h"
#include <iostream>


void PetShop::addAnimal(Animal* animal) {
	_animals.push_back(animal);
}

void PetShop::addAnimal() {
	std::string _name;
	std::string _gender;
	float _price;
	unsigned int _quantity;

	std::cout << "Пол животного: " << std::endl;
	std::getline(std::cin, _gender);

	std::cout << "Имя животного: " << std::endl;
	std::getline(std::cin, _name);

	std::cout << "Цена за животное: " << std::endl;
	std::cin >> _price;

	std::cout << "Кол-во животных: " << std::endl;
	std::cin >> _quantity;

	Animal* animal = new Animal(_gender, _name, _price, _quantity);

	_animals.push_back(animal);
}

//Функции стреляют неисправимыми ошибками, поэтому закомментированы

//void PetShop::deleteAnimal(std::string name) {
//	int index = 0;
//	for (const auto& it : _animals) {
//		if (it->getName() == name) {
//			_animals.erase(_animals.begin() + index);
//			delete(it);
//			return;
//		}
//		index++;
//	}
//}

//void PetShop::changeAnimal(Animal* animal) {
//	std::string _name;
//	std::string _gender;
//	float _price;
//	unsigned int _quantity;
//
//	system("cls");
//
//	std::cout << "Какую информацию необходимо изменить?" << std::endl;
//	std::cout << "1 - Пол" << std::endl;
//	std::cout << "2 - Имя" << std::endl;
//	std::cout << "3 - Цена" << std::endl;
//	std::cout << "4 - Количество" << std::endl;
//
//	int input;
//	std::cin >> input;
//
//	system("cls");
//
//	switch (input) {
//	case 1: {
//		std::cout << "Новый пол: " << std::endl;
//		std::getline(std::cin, _gender);
//		animal->setGender(_gender);
//		break;
//	}
//
//	case 2: {
//		std::cout << "Новое имя: " << std::endl;
//		std::getline(std::cin, _name);
//		animal->setName(_name);
//		break;
//	}
//
//	case 3: {
//		std::cout << "Новая цена: " << std::endl;
//		std::cin >> _price;
//		animal->setPrice(_price);
//		break;
//	}
//
//	case 4: {
//		std::cout << "Новое кол-во: " << std::endl;
//		std::cin >> _quantity;
//		animal->setAmount(_quantity);
//		break;
//	}
//
//	default:
//		break;
//	}
//}