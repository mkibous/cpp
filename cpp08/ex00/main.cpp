/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:06:01 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/16 09:04:48 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <iostream>

int main()
{
    int target = 5;

    {
        std::array<int, 5> numbers = {1, 2, 3, 4, 5};
        std::cout << easyfind(numbers, target) << std::endl;
    }

    {
        std::vector<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(4);
        numbers.push_back(5);
        std::cout << easyfind(numbers, target) << std::endl;
    }

    {
        std::deque<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(4);
        numbers.push_back(5);
        std::cout << easyfind(numbers, target) << std::endl;
    }

    {
        std::list<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(4);
        numbers.push_back(5);
        std::cout << easyfind(numbers, target) << std::endl;
    }

    return 0;
}
