#pragma once
#include <iostream>

class BankAccount
{
protected:
	double balance; // saldo
	std::string owner; //w³aœciciel
	std::string currency; //waluta

	void SetBalance(double b);

public:

	BankAccount();
	BankAccount(double b, std::string o, std::string c);
	
	double GetBalance();

	void AccountInformation();

	void DepositToAccount(double amount);
	bool WidthdrawalFromAccount(double amount);
	void TransferBetweenAcounts(BankAccount& targetAccount, double amount);
};