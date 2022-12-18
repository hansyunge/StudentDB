#include "StudentMenu.h"


StudentMenu::StudentMenu() {

    x = (sizeof(studentMenuChoices) / sizeof(studentMenuChoices[0]));
}

string* StudentMenu::getStudentMenu() {

    cout << "Student Menu: " << endl;
    return studentMenuChoices;
}

int StudentMenu::getStudentMenuSize() {

    return x;
}

void StudentMenu::initializeMenu() {

    StudentMenu newMenu;
    newMenu.createMenu(newMenu.getStudentMenu(), newMenu.getStudentMenuSize());
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
        StudentMenu newStudentMenu;
    }
    }
}
