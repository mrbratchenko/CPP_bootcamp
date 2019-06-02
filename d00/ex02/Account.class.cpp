/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:42:01 by sbratche          #+#    #+#             */
/*   Updated: 2018/10/01 12:42:03 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.class.hpp"


Account::Account(int initial_deposit)
{
	this->_displayTimestamp();
	this->_accountIndex = this->_nbAccounts;
	this->_nbDeposits = this->_totalNbDeposits;
	this->_nbWithdrawals = this->_totalNbWithdrawals;
	this->_amount = initial_deposit;
	std::cout << "index:" << _accountIndex << ";amount:" 
	<< Account::checkAmount() << ";created" << std::endl;
	this->_totalAmount += initial_deposit;
	this->_nbAccounts++;
	return;
}

Account::~Account()
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" 
	<< Account::checkAmount() << ";closed" << std::endl;
	return;
}

void	Account::_displayTimestamp()
{
	std::time_t t = std::time(0);
	tm* time = localtime(&t);
	int year = (time->tm_year)+1900;
	int month = time->tm_mon + 1;
	int day = time->tm_mday;
	int hours = time->tm_hour;
	int minutes = time->tm_min;
	int seconds = time->tm_sec;

	std::cout << '[' << year << month << day << '_' << hours << minutes << seconds << "] ";
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts()
	<< ";total:" << Account::getTotalAmount()
	<< ";deposits:" << Account::getNbDeposits()
	<< ";withdrawals:" << Account::getNbWithdrawals() << std::endl;

}

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	Account::makeDeposit( int deposit )
{
	this->_displayTimestamp();
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_totalNbDeposits += 1;
	this->_nbDeposits += 1;

	std::cout << "index:" << this->_accountIndex 
	<< ";p_amount:" << Account::checkAmount() - deposit
	<<";deposit:" << deposit
	<<";amount:" << Account::checkAmount()
	<<";nb_deposits:" << this->_nbDeposits
	<< std::endl;

}

bool	Account::makeWithdrawal( int withdrawal ) 
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex 
	<< ";p_amount:" << Account::checkAmount();
	if ((Account::checkAmount() - withdrawal) < 0)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		this->_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
		this->_totalNbWithdrawals += 1;
		this->_nbWithdrawals += 1;
		std::cout<<";withdrawal:" << withdrawal
		<<";amount:" << Account::checkAmount()
		<<";nb_withdrawals:" << this->_nbWithdrawals
		<< std::endl;
	}
	return true;
}

int		Account::checkAmount( void ) const
{
	return this->_amount;
}

void		Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex 
	<< ";amount:" << Account::checkAmount()
	<<";deposits:" << this->_nbDeposits
	<<";withdrawals:" << this->_nbWithdrawals
	<< std::endl;
	return;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
