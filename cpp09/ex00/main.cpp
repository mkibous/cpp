/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:45:02 by mkibous           #+#    #+#             */
/*   Updated: 2025/03/04 21:27:38 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
int main(int arc, char **arv)
{
    if (arc != 2) 
        return (std::cout << "Invalid Arguments" << std::endl, 1);
    (void)arv;
    std::ifstream dataBaseFile("data.csv");
    if (!dataBaseFile.is_open())
        return (std::cout << "Error: Could not open database file!" << std::endl, 1);
    std::ifstream secondaryDataFile(arv[1]);
    if (!secondaryDataFile.is_open())
        return (std::cout << "Error: Could not open the file!" << std::endl, 1);
    BitcoinExchange btc;
    try
    {
        btc.savedata(dataBaseFile);
        btc.evaluateData(secondaryDataFile);
    }
    catch (std::exception &e)
    {
        std::cout << "ERROR: " << e.what() << std::endl;
    }
}