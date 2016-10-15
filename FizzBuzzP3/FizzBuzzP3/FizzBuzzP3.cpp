// Week 4: Individual: FizzBuzz Program, Part 3
// PRG/410: C++ Programming I
// October 17, 2016
// Marcia L. Allen
// Modify the FizzBuzz program further by designing a class CFizzbuzz with two private data members
// that store a name up to 14 characters long and an integer item number. Define a getFizzbuzz()
// function member of the CFizzbuzz class that will set values for the data members by reading
// input from the keyboard and a putFizzbuzz() function member that outputs the values
// of the data members. Implement the getRecord() function so that a calling program can
// detect when a zero item number is entered. Test your CFizzbuzz class with a main function 
// that reads and outputs CFizzbuzz objects until a zero item number is entered.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

// CFizzbuzz class with two private data members
class CFizzbuzz {

public:
	CFizzbuzz();
	void putFizzbuzz();
	void getFizzbuzz();
	int getRecord();
private:
	// Store a name up to 14 characters long
	char pname[14];

	// Store an integer item number
	int itemNumber;
};

CFizzbuzz::CFizzbuzz() {

}

// getFizzBuzz function member of the CFizzbuzz class that will set values for the data members
void CFizzbuzz::getFizzbuzz() {

	int num;
	string pname;
	cout << "Enter the player's name: ";
	getline(cin, pname);
	cout << "Enter the player's item number: ";
	cin >> num;

	strcpy_s(this->pname, pname.c_str());
	this->itemNumber = num;
	cin.ignore();
}
// putFizzBuzz function member that outputs the values of the data members.
void CFizzbuzz::putFizzbuzz() {

	cout << "Player Name: " << this->pname << "\n" << endl;

	if ((this->itemNumber % 3 == 0) && (itemNumber % 5 == 0)) {
		cout << "Item Number: " << itemNumber << " - FizzBuzz\n" << endl;
	}
	else if (itemNumber % 3 == 0) {

		cout << "Item Number: " << itemNumber << " - Fizz\n" << endl;
	}
	else if (itemNumber % 5 == 0) {

		cout << "Item Number: " << itemNumber << " - Buzz\n" << endl;
	}
}
// getRecord() function so the program can detect when a zero item number is entered
int CFizzbuzz::getRecord() {

	if (this->itemNumber == 0) {
		cout << "\nGame is over because the item number zero was entered.\n" << endl;
		return 0;
	}
	return itemNumber;
}

int _tmain(int argc, _TCHAR* argv[]) {

	CFizzbuzz buzz;
	buzz.getFizzbuzz();
	while (buzz.getRecord()) {
		buzz.putFizzbuzz();
		buzz.getFizzbuzz();

	}

	return 0;
}
