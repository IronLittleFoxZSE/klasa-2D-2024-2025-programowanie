#pragma once
#include <iostream>

class BankAccount
{
private:
	double balance; // saldo
	std::string owner; //w�a�ciciel
	std::string currency; //waluta

public:
	void AccountInformation();

	void DepositToAccount(double amount);
	bool WidthdrawalFromAccount(double amount);
	void TransferBetweenAcounts(BankAccount& targetAccount, double amount);
};