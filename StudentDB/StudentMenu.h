#pragma once
#include "Menu.h"

using namespace std;

class StudentMenu:public Menu
{
private:
    string studentMenuChoices[5] = { "1) List All Students  ",
                                        " 2) Search for student ",
                                        " 3) Add Student",
                                        " 4) Delete Student",
                                        " 5) Main Menu",};


    int x = sizeof(studentMenuChoices) / (sizeof(studentMenuChoices[0]));

public:
    StudentMenu() {

    };

    string getStudentMenu() {
        cout << "Student Menu: " << endl;
        return studentMenuChoices[getStudentMenuSize()];
    }

    int getStudentMenuSize() {

        return x;
    }


};

