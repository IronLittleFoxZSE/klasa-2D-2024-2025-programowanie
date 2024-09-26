#include<iostream>


struct bankAccount
{
	double balance; // saldo
	std::string owner; //w³aœciciel
	std::string currency; //waluta

};

void accountInformation(bankAccount &account)
{
	std::cout << "Informacja o koncie bankowym.\n";
	std::cout << "W³aœciciel: " << account.owner << "\n";
	std::cout << "Saldo: " << account.balance << " " << account.currency << "\n";
}

void depositToAccount(bankAccount &account, double amount)
{
	amount = abs(amount);
	account.balance = account.balance + amount;
}

bool widthdrawalFromAccount(bankAccount& account, double amount)
{
	amount = abs(amount);
	if (account.balance - amount >= 0)
	{
		account.balance = account.balance - amount;
		return true;
	}
	return false;
}

void transferBetweenAcounts(bankAccount &sourceAccount, bankAccount &targetAccount, double amount)
{
	if (widthdrawalFromAccount(sourceAccount, amount) == true)
		depositToAccount(targetAccount, amount);
}

void task3()
{
	bankAccount firstAccount;
	firstAccount.balance = 10000;
	firstAccount.currency = "z³";
	firstAccount.owner = "Jan Kowalski";

	accountInformation(firstAccount);

	bankAccount secondAccount;
	secondAccount.balance = 15000;
	secondAccount.currency = "z³";
	secondAccount.owner = "Ewa Nowak";

	accountInformation(secondAccount);

	depositToAccount(firstAccount, -14.50);
	accountInformation(firstAccount);

	widthdrawalFromAccount(firstAccount, 14.50);
	accountInformation(firstAccount);

	transferBetweenAcounts(secondAccount, firstAccount, 1000);
	accountInformation(firstAccount);
	accountInformation(secondAccount);
}