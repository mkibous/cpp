/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:43:27 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/14 11:50:03 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
void leak()
{
    system("leaks Array");
}
int main()
{
    // atexit(leak);
    Array<int> arr(5);
    try
    {
        Array<int> arr2(arr);
        std::cout << "size: " << arr2.size() << std::endl;
        for (unsigned int i = 0; i < arr.size(); i++)
        {
            arr[i] = i + 1;
        }
        arr2 = arr;
        for (unsigned int i = 0; i < arr2.size(); i++)
        {
            std::cout << arr2[i] << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}