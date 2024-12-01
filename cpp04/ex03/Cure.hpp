#pragma once
#include "AMateria.hpp"
class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure &src);
    Cure &operator=(const Cure &rhs);
    ~Cure();
    Cure *clone();
    void use(ICharacter &target);
};
