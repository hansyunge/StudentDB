#include "StudentMenu.h"


StudentMenu::StudentMenu()
{
    x = (sizeof(studentMenuChoices) / sizeof(studentMenuChoices[0]));
}

string* StudentMenu::getStudentMenu()
{
    cout << endl << "**********************************" << endl;
    cout << "Student Menu: ";
    return studentMenuChoices;
}

int StudentMenu::getStudentMenuSize()
{
    return x;
}

string* StudentMenu::getHeader()
{
    return studentHeader;
}

void StudentMenu::initializeStudentMenu() 
{
    StudentMenu newMenu;
    newMenu.createMenu(newMenu.getStudentMenu(), newMenu.getStudentMenuSize());
    int selection = newMenu.obtainSelection();
    cout << endl << "Your selection is: " << selection << endl;
    studentMenuSelection(selection);
}
// Options: 1) List All Students, 2) Search for student, 3) Add Student, 4) Delete Student, 5) Main Menu
    int StudentMenu::studentMenuSelection(int selection)
    {
    switch (selection) 
    {
    case 1:
    {
        cout << endl << "list all students in database" << endl;
        Database newConnection;
        newConnection.dbMakeConnection();
        newConnection.dbPrintQuery(getHeader());
        initializeStudentMenu();
        break;
    }
    case 2:
    {   
        Database newConnection;
        newConnection.dbMakeConnection();
        string searchStudent;
        cout << endl << "Enter student ID number or last name to search for student: ";
        cin >> searchStudent;
       
        for (char const& ch : searchStudent) {
            if (isdigit(ch) == 0) {
                isIDdigit = false;
                exit;               
            }
            else {
                isIDdigit = true;
            }    
        }
        if (isIDdigit == true) {
            newConnection.searchStudentID(searchStudent, getHeader());
        }
        else {
             newConnection.searchStudentLastName(searchStudent, getHeader());
        }
        initializeStudentMenu();
        break;
    }
    case 3:
    {
        cout << endl << "add a student to the database" << endl;
        initializeStudentMenu();
        break;
    }
    case 4:
    {
        cout << endl << "Delete a student from the database" << endl;
        initializeStudentMenu();
        break;
    }
    case 5:
    {
        MainMenu mainMenu;
        mainMenu.initializeMenu();
        break;
    }
    default:
    {
        cout << endl << "Please Enter a valid selection.  Try again. " << endl << endl;
        StudentMenu newStudentMenu;
        newStudentMenu.initializeStudentMenu();
    }
    }
    return 0;
}
