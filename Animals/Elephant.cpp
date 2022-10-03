#include "Elephant.h"
#include "Animal.h"

Elephant::Elephant(string K, string Ph, string C, string O, string F, string G, string S, double t_s) : Animal( K, Ph,  C, O, F, G, S)
{
	tusk_size = t_s;
}

void Elephant::Print() {
	Animal::Print();
	cout << "Tusk size:\t" << tusk_size << endl;
}

void Elephant::Input()
{
	Animal::Input();
	cout << "Enter size of tusk:";
	cin >> tusk_size;

}
