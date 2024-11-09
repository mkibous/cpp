/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:31:33 by mkibous           #+#    #+#             */
/*   Updated: 2024/10/12 11:06:20 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
void PhoneBook::ADD()
{
    contacts[index].seter(ft_read((char *)"first name :\n"), (std::string)"f_name", index);
    contacts[index].seter(ft_read((char *)"last name :\n"), (std::string)"l_name", index);
    contacts[index].seter(ft_read((char *)"nickname :\n"), (std::string)"nickname", index);
    contacts[index].seter(ft_read((char *)"phone number :\n"), (std::string)"number", index);
    contacts[index].seter(ft_read((char *)"darkest secret :\n"), (std::string)"secret", index);
    index != 7 ? index++ : index = 0;
}
    
void PhoneBook::SEARCH()
{
    int i = -1;
    std::string in;
    for(int j = 0; j < 8; j++){
        if(contacts[j].seach_print() == 0 && j == 0){
            std::cout << "No contacts found.\n";
            return;
        }}
    std::cout << "Choose an index :\n";
    std::getline(std::cin, in);
    if (std::cin.eof())
        exit(0);
    (in.length() == 1) ? i = in[0] - '0' : i = -1;
    if(i >= 0 && i <= 7)
        contacts[i].print();
    else
        std::cout << "Contact not found.\n";
}
PhoneBook::PhoneBook()
{
    index = 0;
}