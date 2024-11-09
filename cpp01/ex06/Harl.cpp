/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:59:11 by mkibous           #+#    #+#             */
/*   Updated: 2024/10/23 15:52:56 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl << "Entering debug mode. Checking internal state..." << std::endl;
}
void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl
              << "Operation completed successfully." << std::endl;
}
void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl
              << "Potential issue detected. Please check your inputs." << std::endl;
}
void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl
              << "An unexpected error occurred." << std::endl;
}
void Harl::complain(std::string level){

    void (Harl::*funcArr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    for(i = 0; i < 4; i++)
    {
        if (arr[i] == level)
            break;
    }
    switch (i)
    {
    case 0 :
        (this->*funcArr[0])();
    case 1:
        (this->*funcArr[1])();
    case 2:
        (this->*funcArr[2])();
    case 3:
        (this->*funcArr[3])();
        break;

    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}