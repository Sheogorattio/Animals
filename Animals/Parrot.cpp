#include "Parrot.h"
//( K, Ph, C, O, F, G, S)
Parrot::Parrot(const char* n, int w) :Animal("Animalia", "Chordata", "Aves", "Psittaciformers", "Psittacidae", "Psittacus Linnaeus", "Psittacus erithacus Linnaeus", n)
{
	word_count = w;
}

void Parrot::Print()const
{
	Animal::Print();
	cout << "Number of words wich parrot is familiar with:\t" << word_count << endl;
}

void Parrot::Input()
{
	Animal::Input();
	cout << "How many word do this parrot know?";
	cin >> word_count;
}

