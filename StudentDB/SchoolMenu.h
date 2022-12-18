#ifndef _SCHOOL_MENU
#define _SCHOOL_MENU

#include "Menu.h"
#include "Main.h"

class SchoolMenu:public Menu
{
private:
    string schoolMenuChoices[5] = { " 1) List All Schools",
                                        " 2) List Students in School",
                                        " 3) Add School",
                                        " 4) Delete School",
                                        " 5) Main Menu",};


    int x = sizeof(*schoolMenuChoices) / (sizeof(schoolMenuChoices[0]));

public:
    SchoolMenu();

    string* getSchoolMenu();

    int getSchoolMenuSize();

    void initializeMenu();

};

#endif // !_SCHOOL_MENU