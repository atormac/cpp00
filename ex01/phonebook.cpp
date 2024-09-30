#include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->index = 0;
}

void Phonebook::add_contact(Contact c)
{
	this->book[this->index] = c;
	c.print(this->book[this->index]);
	this->index++;
	std::cout << "contact added!" << std::endl;
}

void	Phonebook::display()
{
	printf("index: %d\n", this->index);
	for (int i = 0; i < this->index; i++)
	{
		this->book[i].print(this->book[i]);
	}
}
