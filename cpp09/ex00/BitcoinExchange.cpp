/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:05:49 by mkibous           #+#    #+#             */
/*   Updated: 2025/03/04 21:33:50 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstring>
#include <iterator> 
BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
    *this = src;
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
    if (this != &src)
    {
        this->data = src.data;
    }
    return *this;
}
BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::savedata(std::ifstream &dataBaseFile)
{
    std::string line = "";
    double btcvalue = 0;
    std::getline(dataBaseFile, line);
    if (strcmp(line.c_str(), "date,exchange_rate"))
        throw std::runtime_error("the first line in database file must be \"date,exchange_rate\"");
    while (std::getline(dataBaseFile, line))
    {
        size_t pos = line.find(",");

        if (pos != std::string::npos)
        {
            std::string firstPart = line.substr(0, pos);
            // data.push_back(DateToNumber(firstPart));
            std::string secondPart = line.substr(pos + 1);
            std::istringstream iss(secondPart);
            iss >> btcvalue;
            if (iss.fail())
                throw std::runtime_error("Invalid value in data.csv");
            std::string tmp;
            iss >> tmp;
            long int i = DateToNumber(firstPart);
            if (!tmp.empty() || i < 0)
                throw std::runtime_error("Invalid value in data.csv");
            data[i] = btcvalue;
        }
        else
        {
            throw std::runtime_error("Invalid line in data.csv");
        }
    }
}
double BitcoinExchange::validateNumber(std::string &secondPart)
{
    double number = 0;
    std::istringstream iss(secondPart);
    iss >> number;
    if (iss.fail())
        throw std::runtime_error("Invalid number");
    else if (number < 0.0)
        throw std::runtime_error("not a positive number.");
    else if (number > 1000.0)
        throw std::runtime_error("too large a number.");
    std::string remaining;
    iss >> remaining;
    if(!remaining.empty())
        throw std::runtime_error("Invalid number");
    return (number);
}
bool isLeapYear(int year) {
    // A leap year is divisible by 4, but years divisible by 100 are not leap years unless also divisible by 400
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}
int daysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // If the month is February (index 1), check for a leap year
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return daysInMonth[month - 1];
}
long int DateToNumber(std::string date)
{
    int month;
    int days;
    char separator;
    int year;
    std::istringstream iss(date);
    iss >> year;
    if (iss.fail())
        return (-1);
    iss >> separator;
    if (iss.fail() || separator != '-')
        return(-1);
    iss >> month;
    if (iss.fail())
        return (-1);
    iss >> separator;
    if (iss.fail() || separator != '-')
        return(-1);
    iss >> days;
    if (iss.fail())
        return (-1);
    std::string remaining;
    iss >> remaining;
    if(!remaining.empty())
        return(-1);
    if (month < 1 || month > 12)
        return (-1);
    if (days < 1 || days > daysInMonth(month, year)) // cheking days
        return (-1);
    return (days + (month * 100) + (year * 10000));
}
long int BitcoinExchange::findClosestday(long int target){
    std::map<long int, double>::iterator it = data.find(target);// If found, return the exact key
    // if not get the close biger value to it and move to prev one 
    if (it != data.end()) {
        return it->first;  
    }
    std::map<long int, double>::iterator lower = data.lower_bound(target);
    
    //If lower bound is the first element or target is smaller than the first key, return the first key
    if (lower == data.begin())
        throw std::runtime_error("Invalid date");
    //if target biger than all element wen we iterate to prev we get the last element closest lower key
    --lower;  // Move iterator to the previous element
    return lower->first;  // Return the previous key closest lower key
}
long int BitcoinExchange::searchForDate(std::string &date)
{
    long int ldate = 0;
    ldate = DateToNumber(date);
    if (ldate == -1)
        throw std::runtime_error("Invalid date");
    return (findClosestday(ldate));
}
void BitcoinExchange::evaluateData(std::ifstream &secondaryDataFile)
{

    std::string line = "";
    double exchange = 0;
    long int index = 0;
    std::getline(secondaryDataFile, line);
    if (strcmp(line.c_str(), "date | value"))
        throw std::runtime_error("the first line in data file must be \"date | value\"");
    while (std::getline(secondaryDataFile, line))
    {
        size_t pos = line.find(" | ");

        if (pos != std::string::npos)
        {
            std::string date = line.substr(0, pos);
            std::string s_exchange = line.substr(pos + 3);
            try
            {
                exchange = this->validateNumber(s_exchange);
                index = searchForDate(date);
                std::cout << date << " => " << exchange << " = " << exchange * this->data[index] << std::endl;
            }
            catch (std::exception &e)
            {
                std::cout << "ERROR: " << e.what() << std::endl;
            }
        }
        else
        {
            std::cout << "bad input => " << line << std::endl;
        }
    }
}