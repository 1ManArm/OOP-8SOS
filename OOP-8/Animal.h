#pragma once
#include <iostream>
#include <vector>
#include <string>

class Animal {
	//пол, имя, цена, количество
private:
	std::string _name;
	std::string _gender;
	float _price;
	unsigned int _quantity;
public:
	Animal(std::string name, std::string gender, float price, unsigned int quantity) : _name(name), _gender(gender), _price(price), _quantity(quantity) {}

	std::string getGender();
	void setGender(std::string gender);

	std::string getName();
	void setName(std::string name);

	float getPrice();
	void setPrice(float price);

	int getAmount();
	void setAmount(int amount);
};

class Cat : public Animal {
public:
	Cat(std::string name, std::string gender, float price, unsigned int quantity) : Animal(name, gender, price, quantity){}
};