#include "src/Interface.hh"

Interface::Interface() {}

Interface::~Interface() {}

void Interface::orchestrate()
{
	while(true)
	{
		Menu *menu = new Menu();
		Command *command = new Command();
		Execute *eggsocute = new Execute();
		
		menu->getPrompt();
		command->splitString(menu->accessString());
		eggsocute->makeCharPointers(command->getVector());
		eggsocute->execute(command->getVector());
		
		delete menu;
		menu = 0;
		delete command;
		command = 0;
		delete eggsocute;
		eggsocute = 0;
	}
	return;
}
