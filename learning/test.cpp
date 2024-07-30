#if __cplusplus > 201103L
#error "This code must be compiled with C++11 support"
#endif

#include <iostream>
int main() {
    std::string name;
    std::cout << "what's ur name ?"<< std::endl;
    std::cin >> name;
    std::cout << name << '\n';
    // cin break in space to read the full line use getline
    // ws to eliminate any wait space befor cin
    std::getline(std::cin >> std::ws, name);
    std::cout << name << '\n';
    //simple caculator
    double a;
    double b;
    char op;
    double result;
    std::cout << "enter the 1 number\n";
    std::cin >> a;
    std::cout << "enter the 2 number\n";
    std::cin >> b;
    std::cout << "enter either (+ - / *)\n";
    std::cin >> op;
    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*' :
        result = a * b;
        break;
    case '/':
        b != 0 ? result = a / b : result =  0;
        break;
    default:
        std::cout << "that wasn't valid response\n";
        break;
    }
    std::cout << result;
    return 0;
}
