#include "SchoolMenu.h"


SchoolMenu::SchoolMenu() {

    x = (sizeof(schoolMenuChoices) / sizeof(schoolMenuChoices[0]));
}

string* SchoolMenu::getSchoolMenu() {
    cout << "**********************************" << endl;
    cout << "SchoolMenu: ";
    return schoolMenuChoices;
}

int SchoolMenu::getSchoolMenuSize() {

    return x;
}

void SchoolMenu::initializeSchoolMenu() {

    SchoolMenu newMenu;
    newMenu.createMenu(newMenu.getSchoolMenu(), newMenu.getSchoolMenuSize());
    int selection = newMenu.obtainSelection();
    cout << endl << "Your selection is: " << selection << endl;
    schoolMenuSelection(selection);

}
   
// Options: 1- List schools, 2-List students in school, 3-Add School, 4-Delete School, 5-Main Menu

    int SchoolMenu::schoolMenuSelection(int selection){
    if (selection == 1) {       // list schools     

        cout << endl << "List of schools in database." << endl;
        initializeSchoolMenu();
    }
    if (selection == 2){ // list students in a school
    
        cout << endl << "list of students in a school" << endl;
        initializeSchoolMenu();
    }
    if (selection == 3){ // add a school
    
        cout << endl << "add a school to the database" << endl;
        initializeSchoolMenu();
    }
    if (selection == 4){ // delete a school
    
        cout << endl << "delete a school from the database" << endl;
        initializeSchoolMenu();
    }
    if (selection == 5){ // main menu
 
        MainMenu mainMenu;
        mainMenu.initializeMenu();
    
        } else {

        cout << endl << "Please Enter a valid selection.  Try again. " << endl << endl;
        SchoolMenu newSchoolMenu;
        newSchoolMenu.initializeSchoolMenu();
    }
    return 0;
    }
