#pragma once
#include <iostream>
#include "Contact.hpp"
std::string ft_read(char *msg);
class PhoneBook
{
    private:
        int index;
        Contact contacts[8];
    public :
    void ADD();
    void SEARCH();
    PhoneBook();
};