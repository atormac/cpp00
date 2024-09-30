#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include "contact.hpp"

class Phonebook
{	
	private:
		int	count;
		Contact book[8];
	public:
		Phonebook();
		~Phonebook();
		void add(std::string first_name, std::string last_name, std::string nickname,
				std::string phone_number, std::string secret);

};
#endif
