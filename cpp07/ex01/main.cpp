/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:08:17 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/13 18:44:37 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
template <typename T>
void print(T &num)
{
    std::cout << num << std::endl;
}
int main()
{
    std::string arr[] = {"Hello", "World", "C++"};
    int arr2[] = {1, 5, 6, 84, 188, 66};
    ::iter(arr, (sizeof(arr) / sizeof(arr[0])), print);
    ::iter(arr2, (sizeof(arr2) / sizeof(arr2[0])), print);
}