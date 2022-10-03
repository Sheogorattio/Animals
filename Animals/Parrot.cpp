#include "Parrot.h"

Parrot::Parrot(string K, string Ph, string C, string O, string F, string G, string S, int w):Animal( K, Ph, C, O, F, G, S)
{
	word_count = w;
}

void Parrot::Print()
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

