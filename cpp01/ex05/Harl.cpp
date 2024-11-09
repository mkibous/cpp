/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:59:11 by mkibous           #+#    #+#             */
/*   Updated: 2024/10/26 16:24:46 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
void Harl::debug(void)
{
    std::cout << "Entering debug mode. Checking internal state..." << std::endl;
}
void Harl::info(void)
{
    std::cout << "Operation completed successfully." << std::endl;
}
void Harl::warning(void)
{
    std::cout << "Potential issue detected. Please check your inputs." << std::endl;
}
void Harl::error(void)
{
    std::cout << "An unexpected error occurred." << std::endl;
}
void Harl::complain(std::string level){

    void (Harl::*funcArr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(int i = 0; i < 4; i++)
        arr[i] == level ? (this->*funcArr[i])() : void();
}