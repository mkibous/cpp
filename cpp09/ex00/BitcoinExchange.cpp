/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:05:49 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/18 15:00:08 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstring>
BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
    *this = src;
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
    if (this != &src)
    {
        this->dates = src.dates;
        this->value = src.value;
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
            dates.push_back(DateToNumber(firstPart));
            std::string secondPart = line.substr(pos + 1);
            std::istringstream iss(secondPart);
            iss >> btcvalue;
            if (iss.fail())
                dates.pop_back(), throw std::runtime_error("Invalid value in data.csv");
            value.push_back(btcvalue);
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
    long int number = -1;
    size_t index = date.find("-");
    if (index != std::string::npos && index == 4)
    {
        date.erase(index, 1);
        index = date.find("-");
        if (index != std::string::npos && index == 6)
            date.erase(index, 1);
        else
            return (-1);
        std::istringstream iss(date);
        iss >> number;
        if (iss.fail())
            return (-1);
        if (number % 100 < 1 || number % 100 > daysInMonth((number / 100) % 100, number / 10000)) // cheking days
            return (-1);
        if ((number / 100) % 100 < 1 || (number / 100) % 100 > 12)
            return (-1);
        return (number);
    }
    return -1;
}
unsigned int BitcoinExchange::searchForDate(std::string &date)
{
    long int ldate = 0;
    // need to get closest date
    // first trasform year-month-day to int : ymd
    ldate = DateToNumber(date);
    if (ldate == -1)
        throw std::runtime_error("Invalid date");
    int closestIndex = 0;
    long int min_diff = std::abs(ldate - dates[0]);
    for (size_t i = 0; i < dates.size(); ++i)
    {
        long int diff = std::abs(ldate - dates[i]);
        if (diff < min_diff)
        {
            min_diff = diff;
            closestIndex = i;
        }
    }
    return (closestIndex);
}
void BitcoinExchange::evaluateData(std::ifstream &secondaryDataFile)
{

    std::string line = "";
    double exchange = 0;
    unsigned int index = 0;
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
                std::cout << date << " => " << exchange << " = " << exchange * this->value[index] << std::endl;
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