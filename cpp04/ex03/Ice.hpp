#pragma once
#include "AMateria.hpp"
class Ice : public AMateria
{
private:
    /* data */
public:
    Ice();
    Ice(const Ice &src);
    Ice &operator=(const Ice &rhs);
    ~Ice();
    Ice *clone();
    void use(ICharacter &target);
};
