#ifndef _STUDENT_MENU
#define _STUDENT_MENU

#include "Menu.h"
#include "Main.h"
#include "Database.h"

using namespace std;

class StudentMenu:public Menu
{
private:
    string studentMenuChoices[5] = { " 1) List All Students  ",
                                        " 2) Search for student ",
                                        " 3) Add Student",
                                        " 4) Delete Student",
                                        " 5) Main Menu",};

    string studentHeader[12] = { "First Name: ", 
                                 "Last Name: ", 
                                 "Date of Birth: ", 
                                 "Address: ", 
                                 "Address: ", 
                                 "City: ",
                                 "State: ",
                                 "Country: ", 
                                 "Class: ", 
                                 "Student ID: ",
                                 "Flag: ",
                                 "School: "};


    int x = sizeof(studentMenuChoices) / (sizeof(studentMenuChoices[0]));

public:
    StudentMenu();
    string *getStudentMenu();
    int getStudentMenuSize();
    void initializeStudentMenu();
    int studentMenuSelection(int selection);
    bool isIDdigit;
    string *getHeader();


};

#endif // !_STUDENT_MENU

