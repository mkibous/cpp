/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:43:27 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/28 15:58:28 by mkibous          ###   ########.fr       */
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
    const Array<int> arr(5);
    try
    {
        for (unsigned int i = 0; i < arr.size(); i++)
        {
            arr[i] = i + 1;
        }
        Array<int> arr2(arr);
        std::cout << "size: " << arr2.size() << std::endl;
        Array<int> arr3;
        arr3 = arr2;
        for (unsigned int i = 0; i < arr3.size(); i++)
        {
            std::cout << arr3[i] << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}