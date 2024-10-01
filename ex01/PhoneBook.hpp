#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{	
	private:
		int	index;
		Contact book[8];
	public:
		PhoneBook();
		void add_contact(Contact c);
		void display();	

};
#endif
