#include "PhoneBook.hpp"

std::string user_input(std::string msg);

PhoneBook::PhoneBook()
{
	this->index = 0;
}

void PhoneBook::add_contact(Contact c)
{
	this->book[this->index % 8] = c;
	this->index++;
}

void	PhoneBook::display()
{
	int count = this->index;

	if (count == 0)
		return;
	if (count > 8)
		count = 8;
	for (int i = 0; i < count; i++)
	{
		this->book[i].print(this->book[i], i);
	}
	std::string index = user_input("Enter index (0 - 7) to display full contact info");
	if (std::cin.eof())
		return;
	const char *num = index.c_str();
	int i = *num - '0';
	if (index.length() != 1 || *num < '0' || *num > '7' || i >= count)
	{
		std::cout << "Invalid index provided" << std::endl;
		return;
	}
	this->book[i].print_full(this->book[i]);
}
