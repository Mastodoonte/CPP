#include "../include/Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0; 

Account::Account (int initial_deposit) : _accountIndex(Account::_nbAccounts), _amount(initial_deposit),
_nbDeposits(0), _nbWithdrawals(0)
{
    this->_accountIndex = _nbAccounts;
    this->_nbAccounts += 1;
    this->_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_amount = initial_deposit;
    this->_displayTimestamp();
    std::cout << " index:" <<_accountIndex;
    std::cout << ";amount:" << initial_deposit;
    std::cout << ";created\n";
}

Account::~Account(void)
{
    //[19920104_091532] index:1;amount:785;closed
    _displayTimestamp();
     std::cout << " index:" <<this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";closed\n";
}
int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
    return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_totalNbDeposits += 1;
    this->_nbDeposits += 1;
    this->_displayTimestamp();
    std::cout << " index:";
    std::cout << this->_accountIndex;
    std::cout << ";p_amount:";
    std::cout << this->_amount;
    this->_amount += deposit;
    this->_totalAmount += deposit;
    std::cout << ";deposit:" << deposit;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";nb_depositfs: " << this->_nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
    //[19920104_091532] index:0;p_amount:47;withdrawal:refused
    //[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
    int positive;

    positive = this->_amount;
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    this->_amount -= withdrawal;
    if (this->_amount >= 0)
    {
        this->_totalAmount -= withdrawal;
        this->_nbWithdrawals += 1;
        this->_totalNbWithdrawals += 1;
        std::cout << "withdrawals:" << withdrawal << ";";
        std::cout << "amount:" << this->_amount << ";";
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return (true);
    } 
    else
    {
        this->_amount = positive;
        std::cout << "withdrawal:refused" << std::endl;
        return (false);
    }

    return (0);
}
int		Account::checkAmount( void ) const
{
    if (this->_amount < 0)
    {
         std::cout << "withdrawal:refused" << std::endl;
         return (0);
    }
    else
    {
        return (1);
    }
}
void	Account::displayStatus( void ) const
{
    this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t time = std::time(0);
    std::tm *const pTime= std::localtime(&time);

    std::cout << "[";
    std::cout << 1900 + pTime->tm_year;
    if (pTime->tm_mon + 1 < 10)
        std::cout << "0";
    std::cout << 1 + pTime->tm_mon;
    if (pTime->tm_mday < 10)
        std::cout << "0";
    std::cout << pTime->tm_mday;
    std::cout << "_";
     if (pTime->tm_hour < 10)
        std::cout << "0";
    std::cout << pTime->tm_hour;
     if (pTime->tm_min < 10)
        std::cout << "0";
    std::cout << pTime->tm_min;
    if (pTime->tm_sec < 10)
        std::cout << "0";
    std::cout << pTime->tm_sec;
    std::cout << "]";
}