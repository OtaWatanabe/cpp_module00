#include "PhoneBook.hpp"
#include <iostream>

int main()
{
	std::string	command;
	PhoneBook	phone_book;
	std::cout << "Enter \"ADD\" to save a new contact.\n"
		"Enter \"SEARCH\" to display a specific contact.\n"
		"Enter \"Exit\" to exit: ";
	while (std::cin >> command)
	{
		if (command.compare("ADD") == 0) phone_book.add();
		else if (command.compare("SEARCH") == 0) phone_book.search();
		else if (command.compare("EXIT") == 0) return 0;
		else std::cout << "Doesn't match any command." << std::endl;
		std::cout << "Enter \"ADD\" to save a new contact.\n"
			"Enter \"SEARCH\" to display a specific contact.\n"
			"Enter \"Exit\" to exit: ";
	}
}
