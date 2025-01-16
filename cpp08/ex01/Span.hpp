/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:17:39 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/16 10:43:57 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
class Span
{
private:
    unsigned int maxsize;
    std::vector<int> numbers;
public:
    Span(unsigned int N);
    void addNumber(int number);
    int shortestSpan();
    int longestSpan();
};
