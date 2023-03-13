#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact
{
public:
    Contact();
    ~Contact();
    void get_firstname(std::string firstname);
    void get_lastname(std::string lastname);
    void get_nickname(std::string nickname);
    void get_darkest_secret(std::string darkest_secret);
    void get_phone_number(std::string phone_number);
    void print_contact(int index);

private:
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
    void _class_member_init(void);
};

#endif