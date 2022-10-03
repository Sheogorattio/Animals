#include "Animal.h"

Animal::Animal(string K, string Ph, string C, string O, string F, string G, string S)
{
	Kingdom = K;
	Phylum = Ph;
	Class = C;
	Order = O;
	Family = F;
	Genus = G;
	Species = S;
}

void Animal::Print()
{
	cout << "Kingdom:\t" << Kingdom << endl;
	cout << "Phylum:\t" << Phylum << endl;
	cout << "Class:\t" << Class << endl;
	cout << "Order:\t" << Order << endl;
	cout << "Family:\t" << Family << endl;
	cout << "Genus:\t" << Genus << endl;
	cout << "Species:\t" << Species << endl;
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
