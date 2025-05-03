// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main(){
	// Lethal amount to kill a 35 grams mice is 5grams of sode
	// single can of pop contains 350 grams of code which 
	int Maximun, currentMemvers;
	string choice;
	cout << "What is the maximum amount of people we can attend this boardroom : ";
	cin >> Maximun;
	cout << "How many people are currently in the boardroom : ";
	cin >> currentMemvers;

	if (currentMemvers >= Maximun) {
		cout << "\nPlease note you guys no need meet the fire requirments\nPlease evacuate as soon as possible";
		cout << "\nWould you like to remove poeple from the boardroom to avoid evacuating immediatly? (yes/no)";
		cin >> choice;

		if (choice == "yes") {
			cout << "\n\nHow many people would you like to remove ? ";
			int remove;
			cin >> remove;
			currentMemvers = currentMemvers - remove;

			if (currentMemvers < Maximun) {
				cout << "Please note the meeting can continue";
			}

		}
		else if (choice == "no") {
			cout << "\n\nPlease evacuate immediatly";
		}

	}
	else {
		cout << "\nThank you guys for complying with the fire requirments";
	}

	return 0;





}

