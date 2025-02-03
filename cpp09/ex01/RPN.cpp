/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:41:30 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/25 10:01:40 by mkibous          ###   ########.fr       */
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
void RPN::calculate(char op){
    int res;
    if(data.size() < 2)
        throw std::runtime_error("ERROR");
    int y = data.back();
    data.pop_back();
    int x = data.back();
    data.pop_back();
    op == '+' ? (res = x + y) : (op == '-' ? (res = x - y) : (op == '*' ? (res = x * y) : (res = x / y)));
    data.push_back(res);
}
RPN::RPN(std::string numbers){
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
            if(c >= '0' && c <= '9')
                data.push_back( c - '0');
            if (operators.find(c) != std::string::npos && c != ' ')
            {
                calculate(c);
            }
            
        }
        else
            throw std::runtime_error("ERROR");
    }
}

int RPN::getresult() const{
    if(data.size() != 1)
        throw std::runtime_error("ERROR");
    return data.front();
}