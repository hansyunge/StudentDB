
#include "MainMenu.h"


MainMenu::MainMenu() {

    x = (sizeof(mainMenuChoices) / sizeof(mainMenuChoices[0]));
}

string* MainMenu::getMainMenu() {

    cout << endl << endl << "**********************************" << endl << "Main Menu: ";
    return mainMenuChoices;
}

int MainMenu::getMainMenuSize() {

    return x;
}

void MainMenu::initializeMenu() {

    MainMenu newMenu;
    newMenu.createMenu(newMenu.getMainMenu(), newMenu.getMainMenuSize());
    int selection = newMenu.obtainSelection();

    // selection 1 = student menu
    if (selection==1) {
        StudentMenu newStudentMenu;
        newStudentMenu.initializeStudentMenu();
        newStudentMenu.studentMenuSelection(selection);
    }
    // selection 2 = school menu
    if (selection== 2){
        SchoolMenu newSchoolMenu;
        newSchoolMenu.initializeSchoolMenu();
        newSchoolMenu.schoolMenuSelection(selection);
    }
    // exit
    if (selection == 3){
        cout << endl << "Program terminated.  Exiting school database." << endl << endl << endl;
        exit(0);

        // invalid entry
    } else {
        cout << endl << "Please enter valid selection." << endl;
        MainMenu newMenu;
        newMenu.initializeMenu();
    }
    }
