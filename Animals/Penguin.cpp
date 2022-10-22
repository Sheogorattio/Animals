#include "Penguin.h"
//(K, Ph, C, O, F, G, S)
Penguin::Penguin(const char* n, double w) : Animal("Animalia", "Chordata", "Aves", "Sphenisciformers", "Spheniscidae", "Aptenodytes", "Aptenodytes forsteri", n)
{
	fish_weight = w;
}

void Penguin::Print()const
{
	Animal::Print();
	cout << "How many fish penguin needs to eat:\t" << fish_weight << " kg" << endl;
}

void Penguin::Input()
{
	Animal::Input();
	cout << "How mamy fish do penguine have to eat per month?(kg)";
	cin >> fish_weight;
}
