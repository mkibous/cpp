/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:14:44 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/02 08:39:22 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        materias[i] = NULL;
    }
}
MateriaSource::MateriaSource(const MateriaSource &src)
{
    for (int i = 0; i < 4; i++)
    {
        materias[i] = src.materias[i]->clone();
    }
}
MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
    if (this == &rhs)
        return *this;
    for (int i = 0; i < 4; i++)
    {
        if (materias[i])
            delete materias[i];
        materias[i] = rhs.materias[i]->clone();
    }
    return *this;
}
MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        if (materias[i])
            delete materias[i];
    }
}
void MateriaSource::learnMateria(AMateria *materia) {
    for (int i = 0; i < 4; i++)
    {
        if (!materias[i] && materia)
        {
            materias[i] = materia->clone();
            break;
        }
    }
    delete materia;
}
AMateria *MateriaSource::createMateria(std::string const &type) {
    for (size_t i = 0; i < 4; i++)
    {
        if(materias[i] &&  materias[i]->getType() == type)
            return materias[i]->clone();
    }
    return 0;
}