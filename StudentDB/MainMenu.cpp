
#include "MainMenu.h"


MainMenu::MainMenu() {

    x = (sizeof(mainMenuChoices) / sizeof(mainMenuChoices[0]));
}

string* MainMenu::getMainMenu() {

    cout << "Main Menu: " << endl;
    return mainMenuChoices;
}

int MainMenu::getMainMenuSize() {

    return x;
}

void MainMenu::initializeMenu() {
    
    MainMenu newMenu;
    newMenu.createMenu(newMenu.getMainMenu(), newMenu.getMainMenuSize());
    int selection = newMenu.obtainSelection();
}
