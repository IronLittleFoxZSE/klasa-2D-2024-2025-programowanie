#pragma once
#include <iostream>

class BankAccount
{
public:
	double balance; // saldo
	std::string owner; //w³aœciciel
	std::string currency; //waluta

	void AccountInformation();

	void DepositToAccount(double amount);
	bool WidthdrawalFromAccount(double amount);
	void TransferBetweenAcounts(BankAccount& targetAccount, double amount);
};