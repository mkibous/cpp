/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:44:38 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/20 15:23:27 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
}
Fixed::Fixed( int const value )
{
    this->value = value << bits;
}
Fixed::Fixed( float const value )
{
    this->value = roundf(value * (1 << bits));
}

Fixed::Fixed( Fixed const & src )
{
    *this = src;
}
Fixed::~Fixed()
{
}
int Fixed::getRawBits(void) const
{
    return value;
}
Fixed & Fixed::operator=( Fixed const & rhs )
{
    if (this != &rhs)
        value = rhs.getRawBits();
    return *this;
}
float Fixed::toFloat( void ) const{
    return (float)value / (1 << bits);
}
