#pragma once
#include "Animal.h"
class Dog : public Animal
{
	string breed;
public:
	Dog() = default;
	Dog(string K, string Ph, string C, string O, string F, string G, string S, string br);
	void Print();
	void Input();
};

