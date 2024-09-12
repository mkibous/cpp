/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:31:43 by mkibous           #+#    #+#             */
/*   Updated: 2024/09/12 11:31:44 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int zerolead(int time)
{
    if(time < 10)
        std::cout << "0";
    return(time);
}
void	Account::_displayTimestamp( void )
{
    time_t now = time(0);
    tm* localTime = localtime(&now);
    std::cout << "[" << 1900 + localTime->tm_year << zerolead(1 + localTime->tm_mon)
        << zerolead(localTime->tm_mday) << "_" << zerolead(localTime->tm_hour) << zerolead(localTime->tm_min)
        << zerolead(localTime->tm_sec) << "] ";
}
Account::Account( int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << "\n";
    _nbAccounts++;
    _totalAmount += _amount;
}
Account::~Account( void ){
    _displayTimestamp();
 std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << "\n";
}
void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << "\n";
}
void Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n"; 
}
void Account::makeDeposit(int deposit){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _nbDeposits++;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << "\n";
}
bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if(withdrawal > _amount){
        std::cout << "refused\n";
        return(false);
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    _nbWithdrawals++;
    std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << "\n";
    return(true);
}
int Account::getNbAccounts( void ){
    return _nbAccounts;
}
int Account::getTotalAmount( void ){
    return _totalAmount;
}
int Account::getNbDeposits( void ){
    return _totalNbDeposits;
}
int Account::getNbWithdrawals( void ){
    return _totalNbWithdrawals;
}
int		Account::checkAmount( void ) const {
    return _amount;
}