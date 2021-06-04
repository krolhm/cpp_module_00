/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:47:35 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/04 18:50:45 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Account.class.hpp"

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int 	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

int		Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::_displayTimestamp(void)
{
	time_t		t;
	struct tm	*tm;

	t = time(0);
	tm = localtime(&t);
	std::cout << std::setfill('0') << std::setw(2) << " [" << tm->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_mday;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_hour ;
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_sec << "] ";
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposit:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposit:" << _nbDeposits << ";";
	std::cout << "wtihdrawals:" << _nbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount + deposit << ";";
	std::cout << "nb_deposits:" << _nbDeposits + 1 << std::endl;
	_amount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_totalAmount += deposit;
	return;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (_amount - withdrawal > 0)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << _amount - withdrawal << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
		_amount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		_totalAmount -= withdrawal;
		return (true);
	}
	std::cout << "withdrawal:refused" << std::endl;
	return (false);
}
