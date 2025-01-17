/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:30:13 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/17 19:58:55 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>
class BitcoinExchange
{
private:
std::vector<long int> dates;
std::vector<double> value;
// std::vector<int> secondaryData;

public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &src);
    BitcoinExchange &operator=(const BitcoinExchange &src);
    ~BitcoinExchange();
    void savedata(std::ifstream &dataBaseFile);//to sve data trom data base file
    void evaluateData(std::ifstream &secondaryDataFile);
    double validateNumber(std::string &secondPart);
    unsigned int searchForDate(std::string &date);
};
long int DateToNumber(std::string date);
