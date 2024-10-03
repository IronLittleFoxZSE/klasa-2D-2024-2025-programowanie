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
};





bool widthdrawalFromAccount(BankAccount& account, double amount)
{
	amount = abs(amount);
	if (account.balance - amount >= 0)
	{
		account.balance = account.balance - amount;
		return true;
	}
	return false;
}

void transferBetweenAcounts(BankAccount& sourceAccount, BankAccount& targetAccount, double amount)
{
	if (widthdrawalFromAccount(sourceAccount, amount) == true)
		targetAccount.DepositToAccount(amount);
}

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

	widthdrawalFromAccount(firstAccount, 14.50);
	firstAccount.AccountInformation();

	transferBetweenAcounts(secondAccount, firstAccount, 1000);
	firstAccount.AccountInformation();
	secondAccount.AccountInformation();
}
