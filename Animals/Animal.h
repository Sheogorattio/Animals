#pragma once
#include <iostream>
using namespace std;

class Animal
{
protected:
	string Kingdom;
	string Phylum;
	string Class;
	string Order;
	string Family;
	string Genus;
	string Species;
	string Name;
public:
	Animal() = default;
	Animal(const char* K, const char* Ph, const char* C, const char* O, const char* F, const char* G, const char* S , const char* N);
	virtual void Print()const ;
	void Input();
	operator string();
	string getName()const;
	friend ostream& operator<<(ostream& os, const Animal& obj);
	void setName(const char* n);
};

