#include "PhoneBook.hpp"

void truncated_print(std::string str)
{
    if(str.length() > 10){
        str.at(9) = '.';
        str.erase(10, str.length());
    }
    std::cout << str << " | ";
} 
void Contact::print()
{
    if(!f_name.empty()){
    std::cout << "first name : " << f_name << '\n';
    std::cout << "last name : " << l_name << '\n';
    std::cout << "nickname : " <<  nickname << '\n';
    std::cout << "phone number : " << number << '\n';
    std::cout << "darkest secret : " << secret << '\n';}
    else
        std::cout << "Contact not found.\n";
}
int Contact::seach_print(){
    if(!f_name.empty()){
        std::cout << index << " | ";
        truncated_print(f_name);
        truncated_print(l_name);
        truncated_print(nickname);
        std::cout << "\n";
        return(1);
    }
    return(0);
}

void Contact::seter(std::string str, std::string type, int i){
    index = i;
    if(type == "f_name")
        f_name = str;
    if(type == "l_name")
        l_name = str;
    if(type == "nickname")
        nickname = str;
    if(type == "number")
        number = str;
    if(type == "secret")
        secret = str;
}