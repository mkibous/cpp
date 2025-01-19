/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:41:30 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/19 12:56:05 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
RPN::RPN() {}
RPN::RPN(const RPN &src)
{
    *this = src;
}
RPN &RPN::operator=(const RPN &src)
{
    if (this != &src)
    {
        this->data = src.data;
    }
    return *this;
}
RPN::~RPN() {}
RPN::RPN(std::string &numbers){
    char c;
    std::string operators = "+-*/ ";
    while (numbers.size() > 0)
    {
        c = numbers[0];
        numbers.erase(0, 1);
        // if is a number the next one should be "+-*/ " or \0
        // if is not number or operator or " " invalid
        if((c >= '0' && c <= '9' && (numbers.empty()
            || operators.find(numbers[0]) != std::string::npos))
            || operators.find(c) != std::string::npos)
        {
            if(c != ' ')
                data.push_back(c);
        }
        else
            throw std::runtime_error("Invalid arguments");
    }
}
