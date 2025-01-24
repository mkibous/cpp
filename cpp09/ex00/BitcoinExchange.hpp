/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:30:13 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/23 20:07:11 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <string>
#include <iterator>
#include <cmath>
class BitcoinExchange
{
private:
std::map<long int, double> data;

public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &src);
    BitcoinExchange &operator=(const BitcoinExchange &src);
    ~BitcoinExchange();
    void savedata(std::ifstream &dataBaseFile);//to sve data trom data base file
    void evaluateData(std::ifstream &secondaryDataFile);
    double validateNumber(std::string &secondPart);
    long int searchForDate(std::string &date);
    long int findClosestday(long int target);
};
long int DateToNumber(std::string date);
