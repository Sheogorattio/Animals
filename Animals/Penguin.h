#pragma once
#include "Animal.h"
class Penguin:public Animal
{
	double fish_weight;
public:
	Penguin() = default;
	Penguin(string K, string Ph, string C, string O, string F, string G, string S, double w);
	void Print();
	void Input();
};

