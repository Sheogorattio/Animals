#include <iostream>
#include "Animal.h"
#include"Dog.h"
#include"Elephant.h"
#include"Parrot.h"
#include"Penguin.h"
#include <list>
#include"functions.h"

using namespace std;
int main() {

	list<Animal*> lst;
	bool exit=0;
	int choise;
	while (!exit) {
		system("cls");
		printMenu();
		cin >> choise;
		system("cls");
		switch (choise) {
			case 1:
				addElement(lst, kindSelector());
				break;
			case 2:
				deleteElement(lst);
				break;
			case 3:
				char name[50];
				cout << "Enter name\n";
				cin >> name;
				cout << *searchByName(lst, name);
				system("pause");
				break;
			case 4:
				int num;
				cout << "Enter position number\n";
				cin >> num;
				addToPos(num, lst, kindSelector());
				break;
			case 5:
				print(lst);
				system("pause");
				break;
			case 6:
				{
					char name[50];
					cout << "Enter name\n";
					cin >> name;
					char n_name[50];
					cout << "Enter new name\n";
					cin >> n_name;
					cout << *searchEditByName(lst, name, n_name);
					system("pause");
					break;
				}
			case 7:
				exit = true;
				break;
			default:
				break;
		}
	}
}