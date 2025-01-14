/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 15:16:05 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/13 13:04:08 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>
#include <cmath>
ScalarConverter::ScalarConverter() {}
int countDigits(int num)
{
    int count = 0;
    if (num == 0)
        return 1;

    while (num != 0)
    {
        num /= 10;
        count++;
    }

    return count;
}
void printchar(char c, bool isspecial)
{
    if (isspecial)
        std::cout << "char: " << "impossible" << std::endl;
    else if (c >= 32 && c < 127)
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: " << "Non displayable" << std::endl;
}
void printint(int num, bool isspecial)
{
    if (isspecial)
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << num << std::endl;
}
void printfloat(float num, bool isfloat)
{
    if ((countDigits(num) < 6 && isfloat) || countDigits(num) > 6)
        std::cout << "float: " << num << "f" << std::endl;
    else
        std::cout << "float: " << num << ".0f" << std::endl;
}
void printdouble(double num, bool isfloat)
{
    if ((countDigits(num) < 6 && isfloat) || countDigits(num) > 6)
        std::cout << "double: " << num << std::endl;
    else
        std::cout << "double: " << num << ".0" << std::endl;
}
void ScalarConverter::convert(std::string str)
{
    double number = 0;
    bool isfloat = 0;
    bool isspecial = 0; // nan or inf
    if (str.at(str.length() - 1) == 'f' && str.length() > 1 && (str.at(str.length() - 2) != 'n' || str.find("nan") != std::string::npos))
        str.erase(str.length() - 1, 1);
    if (str.find("nan") != std::string::npos || str.find("inf") != std::string::npos)
        isspecial = 1;
    std::istringstream iss(str);
    iss >> number;
    if (iss.fail())
        std::cout << "Error: Invalid number" << std::endl, exit(1);
    if (number != std::floor(number))
        isfloat = 1;
    if (std::floor(number) < -128.0 || std::floor(number) > 127.0)
        printchar(static_cast<char>(number), 1);
    else
        printchar(static_cast<char>(number), isspecial);
    if (std::floor(number) > 2147483647.0 || std::floor(number) < -2147483648.0)
        isspecial = 1;
    printint(static_cast<int>(number), isspecial);
    printfloat(static_cast<float>(number), isfloat);
    printdouble(number, isfloat);
}
