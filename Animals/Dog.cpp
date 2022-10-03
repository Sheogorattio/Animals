#include "Dog.h"

Dog::Dog(string K, string Ph, string C, string O, string F, string G, string S, string br):Animal(K, Ph, C, O, F, G, S)
{
	breed = br;
}

void Dog::Print()
{
	Animal::Print();
	cout << "Breed:\t" << breed << endl;
}

void Dog::Input()
{
	Animal::Input();
	cout << "Eneter breed:\t";
	cin >> breed;
}
