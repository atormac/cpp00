#include <iostream>


std::string user_input(std::string msg)
{
	std::string input = "";

	std::cout << msg << std::endl;
	std::cin >> input;
	return input;
}

int main(void)
{
	while (true)
	{
		std::string command = user_input("Enter command: ");
		if (command.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
