#include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->index = 0;
}

void Phonebook::add_contact(Contact c)
{
	this->book[this->index % 8] = c;
	c.print(this->book[this->index % 8]);
	this->index++;
	std::cout << "contact added!" << std::endl;
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
}
