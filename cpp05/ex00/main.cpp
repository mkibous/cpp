/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 11:59:45 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/14 13:04:29 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bob("Bob", 0);
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
        std::cout << std::endl;
    try
    {
        Bureaucrat alice("Alice", 151);
        std::cout << alice << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat bob("Bob", 1);
        std::cout << bob << std::endl;
        ++bob;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat bob("Bob", 150);
        std::cout << bob << std::endl;
        --bob;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat jack("Jack", 50);
        // Bureaucrat bob("bob", 80);
        // std::cout << bob << std::endl;
        // bob = jack;
        // std::cout << bob << std::endl;
        std::cout << jack << std::endl;
        --jack;
        --jack;
        std::cout << jack << std::endl;
        ++jack;
        std::cout << jack << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}