#include "SchoolMenu.h"


SchoolMenu::SchoolMenu() {

    x = (sizeof(schoolMenuChoices) / sizeof(schoolMenuChoices[0]));
}

string* SchoolMenu::getSchoolMenu() {

    cout << "SchoolMenu: " << endl;
    return schoolMenuChoices;
}

int SchoolMenu::getSchoolMenuSize() {

    return x;
}

void SchoolMenu::initializeMenu() {

    SchoolMenu newMenu;
    newMenu.createMenu(newMenu.getSchoolMenu(), newMenu.getSchoolMenuSize());
    int selection = newMenu.obtainSelection();

    // Options: 1- List schools, 2-List students in school, 3-Add School, 4-Delete School, 5-Main Menu
    switch (selection) {
    case 1:
    {
        SchoolMenu newSchoolMenu;
        newSchoolMenu.createMenu(newSchoolMenu.getSchoolMenu(), newSchoolMenu.getSchoolMenuSize());
        int selection = newSchoolMenu.obtainSelection();
    }
    case 2:
    {
        SchoolMenu newStudentMenu;
    }
    }
}
