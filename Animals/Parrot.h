#pragma once
#include "Animal.h"
class Parrot:public Animal
{
	int word_count;
public:
	Parrot() = default;
	Parrot(string K, string Ph, string C, string O, string F, string G, string S, int w);
	void Print();
	void Input();
};

