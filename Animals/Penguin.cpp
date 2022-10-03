#include "Penguin.h"

Penguin::Penguin(string K, string Ph, string C, string O, string F, string G, string S, double w) :Animal(K, Ph, C, O, F, G, S)
{
	fish_weight = w;
}

void Penguin::Print()
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
