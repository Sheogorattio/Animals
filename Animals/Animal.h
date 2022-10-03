#pragma once
#include <iostream>
using namespace std;

class Animal
{
protected:
	string Kingdom;
	string Phylum;
	string Class;
	string Order;
	string Family;
	string Genus;
	string Species;
public:
	Animal() = default;
	Animal(string K, string Ph, string C, string O, string F, string G, string S);
	void Print();
	void Input();
};

