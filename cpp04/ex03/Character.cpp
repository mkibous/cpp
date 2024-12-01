/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:53:50 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/01 18:37:43 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
    for (int i = 0; i < 4; i++)
    {
        materias[i] = NULL;
    }
}
Character::Character(std::string const &name) {
    this->name = name;
    for (int i = 0; i < 4; i++)
    {
        materias[i] = NULL;
    }
}
Character::Character(const Character &src) {
    std::cout << "HERE\n";
    name = src.name;
    for (int i = 0; i < 4; i++)
    {
        materias[i] = src.materias[i]->clone();
    }
}
Character &Character::operator=(const Character &rhs) {
    if (this == &rhs)
        return *this;
    name = rhs.name;
    for (int i = 0; i < 4; i++)
    {
        if (rhs.materias[i])
        {
            delete materias[i];
            materias[i] = rhs.materias[i]->clone();
        }
        else
            materias[i] = NULL;
    }
    return *this;
}
Character::~Character() {
    for (size_t i = 0; i < 4; i++)
    {
        if(materias[i])
            delete materias[i];
    }
}
std::string const &Character::getName() const {
    return (name);
}
void Character::equip(AMateria *m) {
    for (int i = 0; i < 4; i++)
    {
        if (!materias[i] && m)
        {
            materias[i] = m->clone();
            delete m;
            break;
        }
    }
}
AMateria *Character::getmateria(int idx)
{
    if(idx >= 0 && idx < 4)
        return(materias[idx]);
    return (NULL);
}
void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4 && materias[idx])
    {
        materias[idx] = NULL;
    }
}
void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < 4 && materias[idx])
    {
        materias[idx]->use(target);
    }
}