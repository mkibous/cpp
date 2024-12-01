#pragma once
#include <iostream>
#include "ICharacter.hpp"
class ICharacter;
class AMateria
{
protected:
    std::string type;

public:
    AMateria();
    AMateria(const AMateria &src);
    AMateria &operator=(const AMateria &rhs);
    virtual ~AMateria();
    AMateria(std::string const &type);
    std::string const &getType() const;
    virtual AMateria *clone() ;
    virtual void use(ICharacter &target);
};