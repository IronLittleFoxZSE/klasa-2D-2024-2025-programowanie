#include <iostream>
#include "BankAccount.h"

BankAccount::BankAccount()
{
	balance = 0;
	owner = "Nieznany";
	currency = "z³";
}

BankAccount::BankAccount(double b, std::string o, std::string c)
{
	balance = b;
	owner = o;
	currency = c;
}

void BankAccount::SetBalance(double b)
{
	if (b >= 0)
		balance = b;
}

double BankAccount::GetBalance()
{
	return balance;
}

void BankAccount::AccountInformation()
{
	std::cout << "Informacja o koncie bankowym.\n";
	std::cout << "W³aœciciel: " << owner << "\n";
	std::cout << "Saldo: " << balance << " " << currency << "\n";
}

void BankAccount::DepositToAccount(double amount)
{
	amount = abs(amount);
	balance = balance + amount;
}

bool BankAccount::WidthdrawalFromAccount(double amount)
{
	amount = abs(amount);
	if (balance - amount >= 0)
	{
		balance = balance - amount;
		return true;
	}
	return false;
}

void BankAccount::TransferBetweenAcounts(BankAccount& targetAccount, double amount)
{
	if (WidthdrawalFromAccount(amount) == true)
		targetAccount.DepositToAccount(amount);
}