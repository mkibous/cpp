#pragma once
#include <iostream>
#include "PhoneBook.hpp"
class Contact
{
    private:
    int index;
    std::string f_name;
    std::string l_name;
    std::string nickname;
    std::string number;
    std::string secret;
    public:
    void print();
    int seach_print();
    void seter(std::string str, std::string type, int i);
};