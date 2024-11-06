#include <iostream>
#include "BankAccount.h"


int main()
{
	BankAccount firstAccount;
	//firstAccount.SetBalance(10000);
	//firstAccount.balance = 10000;
	//firstAccount.currency = "z³";
	//firstAccount.owner = "Jan Kowalski";

	firstAccount.AccountInformation();
	//accountInformation(firstAccount);

	BankAccount secondAccount;
	//secondAccount.SetBalance(15000);
	//secondAccount.balance = 15000;
	//secondAccount.currency = "z³";
	//secondAccount.owner = "Ewa Nowak";

	secondAccount.AccountInformation();

	firstAccount.DepositToAccount(-14.50);
	firstAccount.AccountInformation();

	firstAccount.WidthdrawalFromAccount(14.50);
	firstAccount.AccountInformation();

	secondAccount.TransferBetweenAcounts(firstAccount, 1000);
	firstAccount.AccountInformation();
	secondAccount.AccountInformation();

}
