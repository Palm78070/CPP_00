#include "utils.hpp"

Contact::Contact(void)
{
    this->_class_member_init();
    return;
}
Contact::~Contact(void)
{
    return;
}

void Contact::_class_member_init(void)
{
    this->_firstname = "";
    this->_lastname = "";
    this->_nickname = "";
    this->_phone_number = "";
    this->_darkest_secret = "";
    return;
}

void Contact::get_firstname(std::string firstname)
{
    this->_firstname = firstname;
    return;
}

void Contact::get_lastname(std::string lastname)
{
    this->_lastname = lastname;
    return;
}

void Contact::get_nickname(std::string nickname)
{
    this->_nickname = nickname;
    return;
}

void Contact::get_darkest_secret(std::string darkest_secret)
{
    this->_darkest_secret = darkest_secret;
    return;
}

void Contact::get_phone_number(std::string phone_number)
{
    this->_phone_number = phone_number;
    return;
}

void Contact::print_contact(int index)
{
    std::cout << "|";
    std::cout << std::right << std::setw(10) << std::setfill(' ') << index;
    std::cout << "|";
    std::cout << std::right << std::setw(10) << std::setfill(' ') << this->_firstname;
    std::cout << "|";
    std::cout << std::right << std::setw(10) << std::setfill(' ') << this->_lastname;
    std::cout << "|";
    std::cout << std::right << std::setw(10) << std::setfill(' ') << this->_nickname;
    std::cout << "|";
    std::cout << std::right << std::setw(10) << std::setfill(' ') << this->_darkest_secret;
    std::cout << "|" << std::endl;
    std::cout << std::setw(56) << std::setfill('-');
    std::cout << "" << std::endl;
    return;
}