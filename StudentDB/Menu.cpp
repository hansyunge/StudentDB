#include "Main.h"
#include "Menu.h"

using namespace std;


// creates Menu - accepts menuChoices - array of menu items from each menu, then prints out the menu and returns to caller void.

void Menu::createMenu(string* menuChoices) {


		// Debug lines are indicated with Debug in the comments next to line.

		// cout << "Call to createMenu works." << endl; // DEBUG line testing call to function

		Menu newMenu;

		// cout << "newMenu obj created." << endl; // DEBUG line testing creation of object

		cout << newMenu.menuTopBottomBars[0] << endl; // this line works - if I take this line out it breaks.

		cout << menuChoices[2] << endl; // this line from the for loop works - something in for loop is not working, perhaps the sizeof --- if I take this line out it breaks.

		/* Taking both of the next two lines out, breaks the code, each one removed individually does not break the code */

		// cout << "Size of: " << sizeof(menuChoices) << endl; // this line says 8 -- removing this line DOES NOT break the code.

		cout << (sizeof(*menuChoices)/sizeof(menuChoices[0])) << endl; // sizeof is coming back as 0, it should be three, what's going on here?

		/* The for loop seems to be working because sizeof is reading as 8 giving me the extra white space - is this a memory issue? */

		for (int i = 0; i < sizeof(menuChoices) - 1; i++) {
			cout << "#: " << i << " " << menuChoices[i] << endl;
		}

		cout << newMenu.menuTopBottomBars[1] << endl; // code breaks if I remove this line

};


	int Menu::obtainSelection() {
		int selection;

		cout << "Enter Menu selection :  ";
		cin >> selection;

		return selection;
	};

