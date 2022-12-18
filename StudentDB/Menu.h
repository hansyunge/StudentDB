#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>

using namespace std;

class Menu
{
protected:

    const string menuTopBottomBars[2] = { "**********************************", "**********************************" };

public:
    Menu();
    void createMenu(string *menuChoices, int size);
    int obtainSelection();
    

};
#endif // MENU_H
