/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:16:01 by mkibous           #+#    #+#             */
/*   Updated: 2024/11/22 18:36:15 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << (b / a) << std::endl;
    std::cout << (b + a) << std::endl;
    std::cout << (b - a )<< std::endl;
    std::cout << (b > a) << std::endl;
    std::cout << (b < a) << std::endl;
    std::cout << (b <= b) << std::endl;
    std::cout << (b >= (++a)) << std::endl;
    std::cout << (b == a) << std::endl;
    std::cout << (b != a) << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << Fixed::max(a, a) << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;
    std::cout << Fixed::min(a, a) << std::endl;
    return 0;
}