#pragma once
#include <iostream>
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
    std::string name;
    AMateria *materias[4];
public:
    Character();
    Character(std::string const &name);
    Character(const Character &src);
    Character &operator=(const Character &rhs);
    ~Character();
    std::string const &getName() const;
    void equip(AMateria *m);
    AMateria *getmateria(int idx);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};