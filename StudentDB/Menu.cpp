#include "Main.h"
#include "Menu.h"

using namespace std;


// creates Menus - accepts menuChoices - array of menu items from each menu type, then prints out the menu and returns to caller void.

void Menu::createMenu(string* menuChoices, int size) {

		Menu newMenu;

		cout << newMenu.menuTopBottomBars[0] << endl; // top bar of menu



		for (int i = 0; i < size; i++) {
			cout << menuChoices[i] << endl;
		}

		cout << newMenu.menuTopBottomBars[1] << endl; // bottom menu bar

};


	int Menu::obtainSelection() {
		int selection;

		cout << "Enter Menu selection :  ";
		cin >> selection;

		return selection;
	};

