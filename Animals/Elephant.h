#pragma once
#include "Animal.h"
class Elephant:public Animal
{
	double tusk_size;
public:
	Elephant() = default;
	Elephant(const char* n, double w);
	void Print()const;
	void Input();
};

