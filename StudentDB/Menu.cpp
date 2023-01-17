// Menu is the parent class to all types of menu used.  It will generate the menu and provide the top and bottom bar.

#include "Menu.h"

// createsMenu() - accepts menuChoices an array of menu items from each menu type, then prints out the menu and returns to caller void.
Menu::Menu() {

	const string menuTopBottomBars[2] = { "**********************************", "**********************************" };
	 
}


void Menu::createMenu(string* menuChoices, int size) {

		Menu newMenu;
		cout << endl << newMenu.menuTopBottomBars[0] << endl; // top bar of menu

		for (int i = 0; i < size; i++) {
			cout << menuChoices[i] << endl;
		}
		cout << endl << newMenu.menuTopBottomBars[1] << endl; // bottom menu bar

};


	int Menu::obtainSelection() {
		int selection;

		cout << "Enter Menu selection :  ";
		cin >> selection;
		cout << endl << endl;

		return selection;
	};

