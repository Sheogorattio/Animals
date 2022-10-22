#pragma once
#include "Animal.h"
class Penguin:public Animal
{
	double fish_weight;
public:
	Penguin() = default;
	Penguin(const char* n, double w);
	void Print()const;
	void Input();
};

