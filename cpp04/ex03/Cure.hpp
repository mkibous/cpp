#pragma once
#include "AMateria.hpp"
class Cure : public AMateria
{
private:
    /* data */
public:
    Cure();
    Cure(const Cure &src);
    Cure &operator=(const Cure &rhs);
    ~Cure();
    AMateria *clone();
    void use(ICharacter &target);
};
