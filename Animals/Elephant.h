#pragma once
#include "Animal.h"
class Elephant:public Animal
{
	double tusk_size;
public:
	Elephant() = default;
	Elephant(string K, string Ph, string C, string O, string F, string G, string S, double w);
	void Print();
	void Input();
};

