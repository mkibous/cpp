#pragma once
#include <iostream>
class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain &src);
    Brain &operator=(const Brain &rhs);
    ~Brain();
};
