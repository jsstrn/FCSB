/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Game.h"
#include "Board.h"
#include "Console.h"
using namespace std;

/*********************************************/
/*               Main Function               */
/*********************************************/

/* function declaration */
void welcome();
char menu();
char conti();
void errExit();

/* main function */
int main()
{
	welcome();

	// intialize stock
	Board * b1 = new Board("Chess Set", 12, 59.9);
	Board * b2 = new Board("Monopoly", 18, 79.0);
	Console * c1 = new Console("Angry Bird", 8, 35.5);
	Console * c2 = new Console("Flappy Bird", 6, 12.05);

	// add stock to vector
	vector < Game * > stock_list;
	stock_list.push_back(b1);
	stock_list.push_back(b2);
	stock_list.push_back(c1);
	stock_list.push_back(c2);
	
	char cont;
	do {
		char select;
		select = menu();
		switch (select) {
			case '1':
				// display all stock in inventory
				cout << endl << "No.\tTitle\t\tPrice\tQty\tTotal" << endl;
				for (int i = 0; i < stock_list.size(); i++) {
					cout << i + 1 << "\t";
					stock_list[i]->printItem();
				}
				// prompt user to exit or continue
				cont = conti();
				break;
			case '2':
				// display all stock in inventory
				cout << endl << "No.\tTitle\t\tPrice\tQty\tTotal" << endl;
				for (int i = 0; i < stock_list.size(); i++) {
					cout << i + 1 << "\t";
					stock_list[i]->printItem();
				}
				// prompt user to select a stock item
				cout << endl << "Please select a stock by its corresponding number: ";
				int n;
				cin >> n;
				if (n > 0 && n < 4) {
					n -= 1;
					cout << endl << "You selected >>>>>" << endl;
					cout << "Title\t\tPrice\tQty\tTotal" << endl;
					stock_list[n]->printItem();
					// edit quantity of selected stock
					cout << endl << "Enter new quantity for the stock: ";
					int q;
					cin >> q;
					stock_list[n]->setQty(q);
					cout << endl << "New quantity updated >>>>>" << endl;
					cout << "Title\t\tPrice\tQty\tTotal" << endl;
					stock_list[n]->printItem();
				} else {
					errExit();
				}
				// prompt user to exit or continue
				cont = conti();
				break;
			case '3':
				// reset quantity of all stock to zero
				cout << endl << "WARNING: This will reset all stock to zero. ";
				cout << endl << "Are you sure you want to proceed? [y/n] ";
				char confirm;
				cin >> confirm;
				if (confirm == 'y' || confirm == 'Y') {
					for (int i = 0; i < stock_list.size(); i++) {
						stock_list[i]->setQty(0);
					}
				}
				// display all stock in inventory
				cout << endl << "No.\tTitle\t\tPrice\tQty\tTotal" << endl;
				for (int i = 0; i < stock_list.size(); i++) {
					cout << i + 1 << "\t";
					stock_list[i]->printItem();
				}
				// prompt user to exit or continue
				cont = conti();
				break;
			default:
				// display error message
				errExit();
				// prompt user to exit or continue
				cont = conti();
				break;
		}
	} while (cont == 'y' || cont == 'Y');

	cout << endl << "See you again. Goodbye!" << endl << endl;

	return 0;
} // end main function 

/* other function definitions */
char menu() {
	cout << endl;
	cout << " [1] - List all stock in inventory" << endl;
	cout << " [2] - Edit quantity of selected stock" << endl;
	cout << " [3] - Reset quantity of all stock to zero" << endl;
	cout << endl;
	cout << " Please select an option: ";
	char select;
	cin >> select;
	return select;
} // end menu function

void welcome() {
	cout << endl;
	cout << " __________________________________________ " << endl;
	cout << "|                                          |" << endl;
	cout << "|        GameLand Inventory System         |" << endl;
	cout << "|       ~~~~~~~~~~~~~~~~~~~~~~~~~~~        |" << endl;
	cout << "| Developed by Faisal, Hafiz, and Jesstern |" << endl;
	cout << "|__________________________________________|" << endl;
} // end welcome function

char conti() {
	char choice;
	cout << endl << "Would you like to continue? [y/n] ";
	cin >> choice;
	return choice;
}

void errExit() {
	cout << endl << "You entered an invalid choice.";
	cout << "The program will now terminate. Goodbye." << endl;
	exit(EXIT_FAILURE);
}

