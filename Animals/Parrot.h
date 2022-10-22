#pragma once
#include "Animal.h"
class Parrot:public Animal
{
	int word_count;
public:
	Parrot() = default;
	Parrot(const char* n, int w);
	void Print()const;
	void Input();
};

