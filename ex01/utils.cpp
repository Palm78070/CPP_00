#include "utils.hpp"

std::string str_toupper(std::string s)
{
    int i;
    int len;

    i = -1;
    len = s.length();
    while (++i < len)
        s[i] = toupper(s[i]);
    return (s);
}

int is_all_digit(std::string str)
{
    int i;
    int length;

    i = -1;
    if (str == "")
        return (0);
    length = str.length();
    while (++i < length)
        if (!std::isdigit(str[i]))
            return (0);
    return (1);
}

int valid_phone_number(std::string str)
{
    int i;
    int length;

    i = -1;
    length = str.length();
    if (length != 10)
        return (0);
    return (is_all_digit(str));
}

int is_all_alpha(std::string str)
{
    int i;
    int length;

    i = -1;
    if (str == "")
        return (0);
    length = str.length();
    while (++i < length)
        if (!std::isalpha(str[i]))
            return (0);
    return (1);
}

std::string truncate_and_replace(std::string str, int size)
{
    if (size <= 0)
        return (str);
    str.resize(10);
    str[9] = '.';
    return (str);
}