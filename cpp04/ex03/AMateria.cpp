/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:49:52 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/28 17:19:06 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
}
AMateria::AMateria(const AMateria &src)
{
    type = src.type;
    std::cout << "AMateria Copy constructor called" << std::endl;
}
AMateria &AMateria::operator=(const AMateria &rhs)
{
    std::cout << "AMateria Copy assignment operator called" << std::endl;
    if (this == &rhs)
        return *this;
    type = rhs.type;
    return *this;
}
AMateria::~AMateria()
{
    std::cout << "AMateria Destructor called" << std::endl;
}
AMateria::AMateria(std::string const &type){
    this->type = type;
    std::cout << "AMateria constructor called" << std::endl;
}
std::string const &AMateria::getType() const
{
    return type;
} // Returns the materia type
virtual AMateria *clone() const = 0{

}
virtual void use(ICharacter &target){

}