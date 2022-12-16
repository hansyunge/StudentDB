/* Main Menu Class - this class creates the main mnenu
Project 2
Hans Yunge
November 12, 2022
******************************************
Student-School Management System
******************************************
*/


#include "Main.h"
#include "MainMenu.h"

using namespace std;

int main() {

    // getting Main Menu generated by calling MainMenu and passing the data to createMenu
    MainMenu newMenu;
           
    newMenu.createMenu(newMenu.getMainMenu(), newMenu.getMainMenuSize());
    int selection = newMenu.obtainSelection();

    return 0;
}