
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

    switch (selection) {
    case 1:
    {
        StudentMenu newStudentMenu;
        newStudentMenu.createMenu(newStudentMenu.getStudentMenu(), newStudentMenu.getStudentMenuSize());
        int selection = newStudentMenu.obtainSelection();
    }
    case 2:
    {
        SchoolMenu newSchoolMenu;
        newSchoolMenu.createMenu(newSchoolMenu.getSchoolMenu(), newSchoolMenu.getSchoolMenuSize());
        int selection = newSchoolMenu.obtainSelection();
    }
    case 3:
    {
        cout << endl << "Program terminated.  Exiting school database." << endl;
        exit(0);
    }
    }
}
