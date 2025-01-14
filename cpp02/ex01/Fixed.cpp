/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:44:38 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/12 17:31:23 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed( int const value )
{
    this->value = value << bits;
    std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed( float const value )
{
    this->value = roundf(value * (1 << bits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits(void) const
{
    return value;
}
Fixed & Fixed::operator=( Fixed const & rhs )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        value = rhs.getRawBits();
    return *this;
}
float Fixed::toFloat( void ) const{
    return value / (float)(1 << bits);
}

int Fixed::toInt( void ) const{
return value >> bits;
}
std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return o;
}