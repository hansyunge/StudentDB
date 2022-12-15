#pragma once

#ifndef MAIN_MENU



#include "Menu.h"
#include <xkeycheck.h>


class MainMenu:public Menu
{
private:
    string mainMenuChoices[3] = { "1) Student Menu",
                                  "2) School Menu",
                                  "3) Exit", };

    int x = (sizeof(mainMenuChoices) / sizeof(mainMenuChoices[0]));

public:
    MainMenu() {
     
        };

    string * getMainMenu() {

        cout << "Size of x from MainMenu.h getMainMenu():  " << x << endl; // debug code
        cout << "Main Menu choice: " << mainMenuChoices << endl;  // debug code
        return mainMenuChoices;
    }
    
    int getMainMenuSize() {

        return x;
    }






};

#endif // !MAIN_MENU
  

