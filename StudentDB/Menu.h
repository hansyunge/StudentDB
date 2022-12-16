#ifndef MENU_H
#define MENU_H

#pragma once

#include "Main.h"
using namespace std;

class Menu
{
protected:

    string menuTopBottomBars[2] = { "**********************************T", "**********************************B" };
    int menuSelection = 0;


public:

    void createMenu(string *menuChoices, int size);
    int obtainSelection();
    

};
#endif // MENU_H
