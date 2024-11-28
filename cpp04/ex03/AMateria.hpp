#pragma once
#include <iostream>
class AMateria
{
protected:
std::string type;
public:
    AMateria();
    AMateria(const AMateria &src);
    AMateria &operator=(const AMateria &rhs);
    ~AMateria();
    AMateria(std::string const &type);
    std::string const &getType() const; // Returns the materia type
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};