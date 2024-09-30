#include "phonebook.hpp"

std::string user_input(std::string msg);

Phonebook::Phonebook()
{
	this->index = 0;
}

void Phonebook::add_contact(Contact c)
{
	this->book[this->index % 8] = c;
	this->index++;
}

void	Phonebook::display()
{
	int count = this->index;

	if (count > 8)
		count = 8;
	printf("record count: %d\n", count);
	for (int i = 0; i < count; i++)
	{
		this->book[i].print(this->book[i]);
	}
	std::string index = user_input("Enter index (0 - 7) to display full contact info");
	if (std::cin.eof())
		return;
	const char *num = index.c_str();
	int i = '0' - *num;
	if (index.length() != 1 || *num < '0' || *num > '7' || i > this->index)
	{
		std::cout << "Invalid index provided" << std::endl;
		return;
	}
	this->book[i].print_full(this->book[i]);
}
