#pragma once
#include <iostream>
#include<list>
using namespace std;

void printMenu() {
	cout << "1.add element\n" << "2.delete element\n" << "3.search\n" << "4.add to current position\n" << "5.print\n" << "6/.search and edit\n" << "7.exit\n";
}

Animal* kindSelector() {
	cout << "Select kind of animal(enter number)\n\n1.Dog\n2.Elephant\n3.Parrot\n4.Penguin\n";
	int num;
	cin >> num;
	Animal* obj = nullptr;
	char n[50];
	cout << "Enter name\n";
	cin >> n;
	switch (num)
	{
		case 1:
			cout << "Enter breed\n";
			char br[50];
			cin >> br;
			obj = new Dog(n, br);
			break;
		case 2:
			{
				int size=0;
				cout << "Enter size of tusks\n";
				cin >> size;
				obj = new Elephant(n, size);
				break;
			}
		case 3:
			{
				int words=0;
				cout << "Enter nuber of the word which parrot knows\n";
				cin >> words;
				obj = new Parrot(n, words);
				break;
			}
		case 4:
			{
				double f_weight = 0;
				cout << "Enter weight of fish\n";
				cin >> f_weight;
				obj = new Penguin(n, f_weight);
				break;
			}
		default:
			break;
	}
	return obj;
}

Animal* searchEditByName(list<Animal*>& lst, const char* name, const char * new_name) {
	string _n = name;
	for (auto temp = lst.begin(); temp != lst.end(); temp++) {
		if ((*temp)->getName() == name) {
			temp._Ptr->_Myval->setName(new_name);
			return temp._Ptr->_Myval;
		}
	}
}

template <class T>
void addToPos(int pos, list<T>&lst, const T& obj) {
	auto iter = lst.begin();
	for (int i = 1; i < pos; i++) {
		iter++;
	}
	lst.insert(iter, obj);
}

template<class T>
void addElement(list<T>& lst, const T& elem) {
	lst.push_back(elem);
}

template<class T>
void deleteElement(list<T>& lst) {
	lst.pop_back();
}

//Animal searchByName(const list<Animal>& lst, const char* n) {
//	string _n = n;
//	for (auto temp = lst.begin(); temp != lst.end(); temp++) {
//		if (n == temp._Ptr->_Myval.getName()) {
//			return temp._Ptr->_Myval;
//		}
//	}
//}


//template<class T>
Animal* searchByName( const list<Animal*>& lst, const char* n) {
	string _n = n;
	for (auto temp = lst.begin(); temp != lst.end(); temp++) {
		if ((*temp)->getName() == n) {
			return temp._Ptr->_Myval;
		}
	}
}

template<class T>
void print(const list<T>& lst) {
	for (auto temp = lst.begin(); temp != lst.end(); temp++) {
		cout << *temp._Ptr->_Myval;
		cout << "\n-------------------------------------\n";
	}
}