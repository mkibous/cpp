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
    std::cout << name;
    return 0;
}
