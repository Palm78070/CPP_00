#include "utils.hpp"

PhoneBook::PhoneBook(void)
{
    PhoneBook::_count = -1;
    return;
}
PhoneBook::~PhoneBook(void)
{
    return;
}

int PhoneBook::_count = -1;

int PhoneBook::_get_index()
{
    int i;

    i = PhoneBook::_count;
    if (i == -1)
        return (i + 1);
    else if (i > 7)
        return (7);
    else
        return (i);
}

void PhoneBook::_add_input(int mode, std::string input)
{
    int i;
    Contact contact;

    i = this->_get_index();
    if (mode == 0)
        this->_contact[i].get_firstname(input);
    else if (mode == 1)
        this->_contact[i].get_lastname(input);
    else if (mode == 2)
        this->_contact[i].get_nickname(input);
    else if (mode == 3)
        this->_contact[i].get_phone_number(input);
    else if (mode == 4)
        this->_contact[i].get_darkest_secret(input);
    return;
}

void PhoneBook::_receive_input(std::string column, int valid_num, int valid_str, int mode)
{
    std::string input;

    input = "";
    std::cout << column << ": ";
    std::getline(std::cin, input);
    if (!std::cin)
        exit(0);
    if (mode != 3)
        valid_str = is_all_alpha(input);
    else
        valid_num = valid_phone_number(input);
    if (input == "" || (mode == 3 && !valid_num) || (mode != 4 && !valid_str))
    {
        if (input == "")
            std::cout << column << " is blank, Please fill in form" << std::endl;
        else if (mode != 3 && mode != 4 && !valid_str)
            std::cout << "Invalid " << column << " please fill in form again" << std::endl;
        else if (mode == 3 && !valid_num)
            std::cout << "Invalid phone number, please fill in form again" << std::endl;
        this->_receive_input(column, valid_num, valid_str, mode);
    }
    else
    {
        if (input.length() > 10)
            input = truncate_and_replace(input, 10);
        this->_add_input(mode, input);
        return;
    }
}

void PhoneBook::add_contact(void)
{
    PhoneBook::_count += 1;
    if (PhoneBook::_count > 7)
        PhoneBook::_count = 7;
    this->_receive_input("First name", 1, 1, 0);
    this->_receive_input("Last name", 1, 1, 1);
    this->_receive_input("Nickname", 1, 1, 2);
    this->_receive_input("Phone number", 1, 1, 3);
    this->_receive_input("Darkest secret", 1, 1, 4);
    return;
}

void PhoneBook::_print_head(void)
{
    std::cout << std::setw(56) << std::setfill('-');
    std::cout << "" << std::endl;
    std::cout << "|";
    std::cout << std::left << std::setw(10) << std::setfill(' ') << "Index";
    std::cout << "|";
    std::cout << std::left << std::setw(10) << std::setfill(' ') << "First name";
    std::cout << "|";
    std::cout << std::left << std::setw(10) << std::setfill(' ') << "Last name";
    std::cout << "|";
    std::cout << std::left << std::setw(10) << std::setfill(' ') << "Nickname";
    std::cout << "|";
    std::cout << std::left << std::setw(10) << std::setfill(' ') << "Darkest_s.";
    std::cout << "|" << std::endl;
    std::cout << std::setw(56) << std::setfill('-');
    std::cout << "" << std::endl;
    return;
}

void PhoneBook::_search_index(void)
{
    int index;
    int all_digit;
    std::string input;

    index = -1;
    input = "";
    std::cout << "index: ";
    std::getline(std::cin, input);
    if (!std::cin)
        exit(0);
    all_digit = is_all_digit(input);
    if (all_digit)
        index = stoi(input);
    if (!all_digit || (index < 0 || index > PhoneBook::_count))
    {
        if (!all_digit)
            std::cout << "Invalid index, Please fill in form again" << std::endl;
        else
            std::cout << "Index is out of range, Please fill in form again" << std::endl;
        this->_search_index();
    }
    else
        this->_contact[index].print_contact();
    return;
}

void PhoneBook::search_contact(void)
{
    int index;
    int count;

    count = PhoneBook::_count;
    index = -1;
    if (count == -1)
        std::cout << "No contact to print" << std::endl;
    else
    {
        this->_print_head();
        while (++index <= count)
            this->_contact[index].print_contact_tab(index);
        this->_search_index();
    }
    return;
}