#ifndef UTILS_H
#define UTILS_H

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>

std::string str_toupper(std::string s);
int valid_phone_number(std::string str);
int is_all_digit(std::string str);
int is_all_alpha(std::string str);
std::string truncate_and_replace(std::string str, int size);

#endif