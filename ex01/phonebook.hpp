#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include "contact.hpp"

class Phonebook
{	
	private:
		int	index;
		Contact book[8];
	public:
		Phonebook();
		void add_contact(Contact c);
		void display();	

};
#endif
