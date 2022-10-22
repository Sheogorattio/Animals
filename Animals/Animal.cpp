#include "Animal.h"

Animal::Animal(const char* K, const char* Ph, const char* C, const char* O, const char* F, const char* G, const char* S, const char* N)
{
	Kingdom = K;
	Phylum = Ph;
	Class = C;
	Order = O;
	Family = F;
	Genus = G;
	Species = S;
	Name = N;
}

void Animal::Print()const
{
	cout << "Kingdom:\t" << Kingdom << endl;
	cout << "Phylum:\t" << Phylum << endl;
	cout << "Class:\t" << Class << endl;
	cout << "Order:\t" << Order << endl;
	cout << "Family:\t" << Family << endl;
	cout << "Genus:\t" << Genus << endl;
	cout << "Species:\t" << Species << endl;
	cout << "Personal name:\t" << Name << endl;
}

void Animal::Input()
{
	cout << "enter Kingdom:";
	cin >> Kingdom;
	cout << "enter Phylum:";
	cin >> Phylum;
	cout << "enter Class:";
	cin >> Class;
	cout << "enter Order:";
	cin >> Order;
	cout << "enter Family:";
	cin >> Family;
	cout << "enter Genus:";
	cin >> Genus;
	cout << "enter Species:";
	cin >> Species;
}

Animal::operator string()
{
	return Name;
}

string Animal::getName()const
{
	return Name;
}

void Animal::setName(const char* n)
{
	Name = n;
}

ostream& operator<<(ostream& os, const Animal& obj)
{
	obj.Print();
	return os;
}
