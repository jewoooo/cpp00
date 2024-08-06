#include "Contact.hpp"

void Contact::setFirstName(const std::string &firstName) {
	this->first_name = firstName;
}

void Contact::setLastName(const std::string &lastName){
	this->last_name = lastName;
}

void Contact::setNickname(const std::string &nickname) {
	this->nickname = nickname;;
}

void Contact::setPhoneNumber(const std::string &phoneNumber) {
	this->phone_number = phoneNumber;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) {
	this->darkest_secret = darkestSecret;
}
