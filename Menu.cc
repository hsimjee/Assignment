#include "Menu.hh"

Menu::Menu() : returnCMD("") {}

Menu::~Menu() {}

void Menu::getPrompt()
{   
   std::cout << "$ ";
   
   getline(std::cin, returnCMD);
      
   return;
   /* As of now, interface will call Command's splitString function next. */
}

std::string Menu::accessString()
{
   return returnCMD;
}
