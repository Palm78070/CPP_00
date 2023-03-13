#include "utils.hpp"

int main(void)
{
    std::string str;
    PhoneBook phonebook;

    str = "";
    while (1)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, str);
        if (str_toupper(str) == "EXIT" || !std::cin)
            break;
        if (str == "")
            continue;
        else if (str_toupper(str) == "ADD")
            phonebook.add_contact();
        else if (str_toupper(str) == "SEARCH")
            phonebook.search_contact();
        else
            std::cout << "Invalid command" << std::endl;
    }
    return (0);
}