#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"


std::string user_input(std::string msg)
{
	std::string input = "";

	std::cout << msg << std::endl;
	std::getline(std::cin, input);
	return input;
}

void	add_contact(Phonebook & pb)
{
	std::string first_name = user_input("First name:");
	std::string last_name = user_input("Last name:");
	std::string nickname = user_input("Nickname:");
	std::string phonenumber = user_input("Phone number:");
	std::string secret = user_input("Darkest secret:");
	
	if (first_name.empty() || last_name.empty())
		return ;
	Contact c(first_name, last_name, nickname, phonenumber, secret);
	//c.print(c);
	pb.add_contact(c);

}
int main(void)
{
	Phonebook   pb = Phonebook();

	while (true)
	{
		std::string command = user_input("Enter command: ");
		if (std::cin.eof())
			break ;
		if (command.compare("EXIT") == 0)
			break;
		if (command.compare("ADD") == 0)
			add_contact(pb);
		if (command.compare("SEARCH") == 0)
			pb.display();
	}
	return (0);
}
