#include "contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname,
				std::string phone_number, std::string secret)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_phone_number = phone_number;
	_secret = secret;
}

void Contact::print(Contact c)
{
	std::cout << "First name: " << c._first_name;
	std::cout << "Last name: " << c._last_name;
	std::cout << "Nickname: " << c._nickname;
	std::cout << std::endl;
}


