/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:20:32 by mkibous           #+#    #+#             */
/*   Updated: 2024/10/09 12:23:06 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string ft_read(char *msg)
{
    std::string str;
    while(str.empty())
    {
        std::cout << msg;
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
    }
    return(str);
}

int main()
{
    PhoneBook book;
    std::string command;
    while (1)
    {
        command = ft_read((char *)"enter one of three commands {ADD, SEARCH, EXIT}\n");
        if (command == (std::string)"ADD")
            book.ADD();
        if (command == (std::string)"SEARCH")
            book.SEARCH();
        else if(command == (std::string)"EXIT")
            return(0);
    }
}