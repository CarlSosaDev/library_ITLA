
#include "Menu.h"
#include <iostream>

using namespace std;

void Menu::show()
{
	//TODO: Implement this method.
	cout << "*******************************" <<endl;
	cout << "* Welcome to the Library Menu *" << endl;
	cout << "*******************************" <<endl;
	cout << "1-Book List" << endl;
	cout << "2-Add Book" << endl;
	cout << "3-Delete Book" <<endl;
	cout << "4-Stop" <<endl;
}

Menu::Menu()
{

}

