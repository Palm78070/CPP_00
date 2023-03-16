#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

Account::Account(int initial_deposit)
{
 this->_accountIndex = Account::_nbAccounts++;
 this->_amount = initial_deposit;
 this->_nbDeposits = 0;
 this->_nbWithdrawals = 0;
 Account::_totalAmount += this->_amount;
 Account::_displayTimestamp();
 std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
};

Account::~Account(void)
{
 Account::_displayTimestamp();
 std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
};

int Account::getNbAccounts(void)
{
 return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
 return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
 return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
 return (Account::_totalNbWithdrawals);
}

int Account::checkAmount(void) const
{
 return (this->_amount);
}

void Account::_displayTimestamp(void)
{
 std::time_t t = std::time(0); // get time now
 std::tm *now = std::localtime(&t);
 std::cout << "[" << (now->tm_year + 1900) << std::setw(2) << std::setfill('0') << (now->tm_mon + 1) << std::setw(2) << std::setfill('0') << now->tm_mday;
 std::cout << "_" << std::setw(2) << std::setfill('0') << now->tm_hour << std::setw(2) << std::setfill('0') << now->tm_min << std::setw(2) << std::setfill('0') << now->tm_sec << "]";
 return;
}

void Account::displayAccountsInfos(void)
{
 Account::_displayTimestamp();
 std::cout << " accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
 return;
}

void Account::displayStatus(void) const
{
 Account::_displayTimestamp();
 std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
 return;
}

void Account::makeDeposit(int deposit)
{
 this->_nbDeposits += 1;
 Account::_totalNbDeposits += 1;
 Account::_displayTimestamp();
 std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits << std::endl;
 this->_amount += deposit;
 Account::_totalAmount += deposit;
 return;
}

bool Account::makeWithdrawal(int withdrawal)
{
 bool bool_var;

 bool_var = true;
 Account::_displayTimestamp();
 std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
 if (this->_amount - withdrawal < 0)
 {
		std::cout << "refused" << std::endl;
		return (false);
 }
 this->_nbWithdrawals += 1;
 Account::_totalNbWithdrawals += 1;
 this->_amount -= withdrawal;
 std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
 Account::_totalAmount -= withdrawal;
 return (true);
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
