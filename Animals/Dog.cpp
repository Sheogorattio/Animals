#include "Dog.h"
//(K, Ph, C, O, F, G, S)
Dog::Dog(const char* n, const char* br):Animal("Animalia", " Chordata" , "Mammalia", "Carnivora", "Canidae", "Canis Linnaesus", "Canis lupus Linnaesus", n)
{
	breed = br;
}

void Dog::Print()const
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
