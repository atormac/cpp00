#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string secret;
	public:
		Contact();
		~Contact();
		Contact(std::string first_name, std::string last_name, std::string nickname,
				std::string phone_number, std::string secret);
};
#endif
