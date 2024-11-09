#pragma once

#include <iostream>
#include <cmath>
class Fixed {
    int value;
    static const int bits = 8;
public:
    Fixed();
    Fixed( int const value );
    Fixed( float const value );
    Fixed( Fixed const & src );
    Fixed & operator=( Fixed const & rhs );
    ~Fixed();
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    friend std::ostream &operator<<(std::ostream &o, Fixed const &fixed);
};