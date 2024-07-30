#include <iostream>

std::string ft_read(char *msg)
{
    std::string str;
    while(str.empty())
    {
        std::cout << msg;
        std::getline(std::cin, str);
    }
    return(str);
}
void truncated_print(std::string str)
{
    if(str.length() > 10){
        str.at(9) = '.';
        str.erase(10, str.length());
    }
    std::cout << str << " | ";
}
class contact
{
    public:
    int index;
    std::string f_name;
    std::string l_name;
    std::string nickname;
    std::string number;
    std::string secret;
    void print()
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
    void SEARCH(){
        if(!f_name.empty()){
            std::cout << index << " | ";
            truncated_print(f_name);
            truncated_print(l_name);
            truncated_print(nickname);
            std::cout << "\n";
        }
    }
};
class PhoneBook
{
    private:
        int index = 0;
        contact contacts[8];
    public :
    void ADD()
    {
        contacts[index].index = index;
        contacts[index].f_name = ft_read((char *)"first name :\n");
        contacts[index].l_name = ft_read((char *)"last name :\n");
        contacts[index].nickname = ft_read((char *)"nickname :\n");
        contacts[index].number = ft_read((char *)"phone number :\n");
        contacts[index].secret = ft_read((char *)"darkest secret :\n");
        index != 7 ? index++ : index = 0;
    }
    void SEARCH()
    {
        int i = -1;
        std::string in;
        for(contact tmp : contacts){
            tmp.SEARCH();
            }
        std::cout << "Choose an index :\n";
        std::getline(std::cin, in);
        (in.length() == 1) ? i = in[0] - '0' : i = -1;
        if(i >= 0 && i <= 7)
            contacts[i].print();
        else
            std::cout << "Contact not found.\n";
    }
};

int main()
{
    PhoneBook book;
    std::string command;
    while (1)
    {
        std::cout << "enter one of three commands {ADD, SEARCH, EXIT}\n";
        std::getline(std::cin, command);
        if (command == (std::string)"ADD")
            book.ADD();
        if (command == (std::string)"SEARCH")
            book.SEARCH();
        else if(command == (std::string)"EXIT")
            return(0);
    }
    

}