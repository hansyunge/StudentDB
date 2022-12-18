// This file provides the menu options which will be sent to Menu to construct

#ifndef MAIN_MENU
#define MAIN_MENU

#include <iostream>
#include <string>
#include "Menu.h"
#include "SchoolMenu.h"
#include "StudentMenu.h"

class MainMenu :public Menu
{
private:
    string mainMenuChoices[3] = { "1) Student Menu",
                                "2) School Menu",
                                "3) Exit", };
    int x;

public:
    MainMenu();
    string* getMainMenu();
    int getMainMenuSize();
    void initializeMenu();
};

#endif // !MAIN_MENU
  

