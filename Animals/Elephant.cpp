#include "Elephant.h"
#include "Animal.h"
//( K, Ph,  C, O, F, G, S)
Elephant::Elephant(const char* n, double t_s) : Animal("Animalia", " Chordata", "Mammalia", "Foboscidea lliger", "Elaphantidae", "Loxodonta", "Loxodonta africana", n)
{
	tusk_size = t_s;
}

void Elephant::Print()const {
	Animal::Print();
	cout << "Tusk size:\t" << tusk_size << endl;
}

void Elephant::Input()
{
	Animal::Input();
	cout << "Enter size of tusk:";
	cin >> tusk_size;

}
