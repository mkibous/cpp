/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:39:33 by mkibous           #+#    #+#             */
/*   Updated: 2025/02/24 11:14:23 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    maxsize = -1;
}
Span::~Span() {}
Span::Span(const Span &src)
{
    *this = src;
}
Span &Span::operator=(const Span &src)
{
    if (this != &src)
    {
        this->maxsize = src.maxsize;
        this->numbers = src.numbers;
    }
    return *this;
}
Span::Span(unsigned int N)
{
    maxsize = N;
}
void Span::addNumber(int number)
{
    if (numbers.size() >= maxsize)
        throw std::runtime_error("The Span is full. Cannot add more elements.");
    numbers.push_back(number);
}
int Span::shortestSpan() const
{
    if (numbers.size() < 2)
        throw std::runtime_error("Not enough elements.");
    unsigned int diff = -1;
    bool sorted = 0;
    for (size_t i = 1; i < numbers.size(); i++)
    {
        if (((numbers[i] - numbers[i - 1]) >= 0) && ((unsigned int)(numbers[i] - numbers[i - 1]) <= diff))
            diff = numbers[i] - numbers[i - 1], sorted = 1;
    }
    if (!sorted)
        throw std::runtime_error("There are no numbers stored");
    return (diff);
}
int Span::longestSpan() const
{
    if (numbers.size() < 2)
        throw std::runtime_error("Not enough elements.");
    unsigned int diff = 0;
    bool sorted = 0;
    int number1 = numbers[0];
    for (size_t i = 1; i < numbers.size(); i++)
    {
        if (((numbers[i] - numbers[i - 1]) >= 0) && ((unsigned int)(numbers[i] - number1) >= diff))
            diff = numbers[i] - number1, sorted = 1;
        else if(((numbers[i] - numbers[i - 1]) < 0))
            number1 = numbers[i];
        
    }
    if (!sorted)
        throw std::runtime_error("There are no numbers stored");
    return (diff);
}

void Span::addNumber(const std::vector<int>::iterator &start,const std::vector<int>::iterator &end ){
    int size = std::distance(start, end);
    if (numbers.size() + size <= maxsize)
        numbers.insert(numbers.end(), start, end);
    else
        throw std::runtime_error("Cannot add more than max size.");
    
}