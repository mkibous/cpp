/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:39:33 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/16 10:40:55 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
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
int Span::shortestSpan()
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
int Span::longestSpan()
{
    if (numbers.size() < 2)
        throw std::runtime_error("Not enough elements.");
    unsigned int diff = 0;
    bool sorted = 0;
    for (size_t i = 1; i < numbers.size(); i++)
    {
        if (((numbers[i] - numbers[i - 1]) >= 0) && ((unsigned int)(numbers[i] - numbers[i - 1]) >= diff))
            diff = numbers[i] - numbers[i - 1], sorted = 1;
    }
    if (!sorted)
        throw std::runtime_error("There are no numbers stored");
    return (diff);
}