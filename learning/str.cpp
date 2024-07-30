
#include <iostream>
void print()
{
    std::cout << "test\n";
}
void print(int i)
{
    std::cout << i << '\n';
}
void print(int i, int *j, int length) {
    std::cout << i << " ";
    for (int k = 0; k < length; ++k) {
        std::cout << j[k] << " ";
    }
    std::cout << '\n';
}
void seap(int a, int b)//pasage par value
{
    int c;
    c = a;
    a = b;
    b = c;
}
void swap(int &a, int &b)//pasage par addr
{
    int c;
    c = a;
    a = b;
    b = c;
}
template <typename T, typename B>
    //this function can suport any data type : 
auto max(T x, B y)
{
    return (x > y) ? x : y;
}
int main()
{
    // null can be an int = 0
    // nullptr can only be converted to pointer types
    std::cout << max(12.1, 12) << "\n";
    int a = 10;
    int b = 20;
    seap(a, b);
    std::cout << "a :" << a << '\n'; 
    std::cout << "b :" << b << '\n';
    swap(a, b);
    std::cout << "a :" << a << '\n'; 
    std::cout << "b :" << b << '\n'; 
    print();
    print(1);
    int *k = NULL;
    k = new int[5];
    std::fill(k, k + 5, 7);
    print(1, k, 5);
    int ss[] = {11, 22 , 33};
    for (int s : ss)
    {
        std::cout << s << "\n";
    }
    
    std::string name;
    while (name.empty())
    {
        std::cout << "enter your full name : ";
        std::getline(std::cin, name);
        if(name.empty())
            std::cout << "Your name is not valid; it can't be void\n";
    }
    
    std::cout << "Welcom " + name + '\n';
    name.erase(1, name.find(' '));
    std::cout << "your login is now " << name << std::endl;
    name.append("@gmail.com");
    std::cout << "your mail is now " << name;
    name.insert(0, "test");
    std::cout << std::endl << name;
    delete[] k;
}