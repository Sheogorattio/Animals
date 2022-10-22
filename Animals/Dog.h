#pragma once
#include "Animal.h"
class Dog : public Animal
{
	string name;
	string breed;
public:
	Dog() = default;
	Dog(const char* n, const char* br);
	void Print()const;
	void Input();
};

