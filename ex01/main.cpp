#include <iostream>
#include "phonebook.hpp"


std::string user_input(std::string msg)
{
	std::string input = "";

	std::cout << msg << std::endl;
	std::cin >> input;
	return input;
}

void	add_contact()
{
	std::string first_name = user_input("First name:");
	std::string last_name = user_input("Last name:");
	std::string nickname = user_input("Nickname:");
	std::string phonenumber = user_input("Phone number:");
	std::string secret = user_input("Darkest secret:");


}
int main(void)
{
	while (true)
	{
		std::string command = user_input("Enter command: ");
		if (command.compare("EXIT") == 0)
			break;
		if (command.compare("ADD") == 0)
			add_contact();
	}
	return (0);
}
