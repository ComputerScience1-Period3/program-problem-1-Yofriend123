/*
John Bui - September 21, 2017 Period 3
Assignment Name : Display Text
Intro to C++ by displaying your name, your period, and "Hello World!" to the console
*/

// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces
using namespace std; 

// Functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	int n = 3;
	cout << "John Bui" << endl;
	cout << "Period " << n << endl;
	cout << "Hello World!" << endl;
	pause(); 
}