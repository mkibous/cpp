#include <iostream>

class human{
    private:
        std::string school = "1337";
    public:
        std::string name;
        std::string occupation = "non"; // default value
        int age;
    human(std::string name, std::string occupation, int a)
    {
        age = a;
        this->name = name;
        this->occupation = occupation;
    }
    void eat(){
        std::cout << "eating\n";
    }
    void schol()
    {
        std::cout << school << "\n";
    }

};
int main()
{
    human h1("mehdi", "devloper", 21);
    std::cout << h1.name << "\n";
    std::cout << h1.occupation << "\n";
    std::cout << h1.age << "\n";
    h1.eat();
    h1.schol();
}