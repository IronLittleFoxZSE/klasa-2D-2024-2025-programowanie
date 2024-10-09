#include <iostream>

class BankAccount
{
public:
	double balance; // saldo
	std::string owner; //w�a�ciciel
	std::string currency; //waluta

	void AccountInformation()
	{
		std::cout << "Informacja o koncie bankowym.\n";
		std::cout << "W�a�ciciel: " << owner << "\n";
		std::cout << "Saldo: " << balance << " " << currency << "\n";
	}

	void DepositToAccount(double amount)
	{
		amount = abs(amount);
		balance = balance + amount;
	}

	bool WidthdrawalFromAccount(double amount)
	{
		amount = abs(amount);
		if (balance - amount >= 0)
		{
			balance = balance - amount;
			return true;
		}
		return false;
	}

	void TransferBetweenAcounts(BankAccount& targetAccount, double amount)
	{
		if (WidthdrawalFromAccount(amount) == true)
			targetAccount.DepositToAccount(amount);
	}
};

int main()
{
	BankAccount firstAccount;
	firstAccount.balance = 10000;
	firstAccount.currency = "z�";
	firstAccount.owner = "Jan Kowalski";

	firstAccount.AccountInformation();
	//accountInformation(firstAccount);

	BankAccount secondAccount;
	secondAccount.balance = 15000;
	secondAccount.currency = "z�";
	secondAccount.owner = "Ewa Nowak";

	secondAccount.AccountInformation();

	firstAccount.DepositToAccount(-14.50);
	firstAccount.AccountInformation();

	firstAccount.WidthdrawalFromAccount(14.50);
	firstAccount.AccountInformation();

	secondAccount.TransferBetweenAcounts(firstAccount, 1000);
	firstAccount.AccountInformation();
	secondAccount.AccountInformation();
}
