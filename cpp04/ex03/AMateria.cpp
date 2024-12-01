/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:49:52 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/01 15:41:53 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    this->type = "empty";
}
AMateria::AMateria(const AMateria &src)
{
    type = src.type;
}
AMateria &AMateria::operator=(const AMateria &rhs)
{
    if (this == &rhs)
        return *this;
    type = rhs.type;
    return *this;
}
AMateria::~AMateria()
{
}
AMateria::AMateria(std::string const &type)
{
    this->type = type;
}
std::string const &AMateria::getType() const
{
    return type;
} // Returns the materia type
AMateria *AMateria::clone() 
{
    return new AMateria(*this);
}
void AMateria::use(ICharacter &target)
{
    std::cout << "* uses some materia on " << target.getName() << " *" << std::endl;
}