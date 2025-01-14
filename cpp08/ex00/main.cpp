/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:06:01 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/14 17:24:58 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <stack>
int main()
{
    std::stack<int> numbers;
    numbers.push(1);
    numbers.push(22);
    numbers.push(12);
    numbers.push(7);
    numbers.push(4);
    numbers.push(3);
    std::cout << easyfind(numbers, 5);
}