#include <iostream>
#include "BankAccount.h"


int main()
{
	BankAccount firstAccount;
	//firstAccount.SetBalance(10000);
	//firstAccount.balance = 10000;
	//firstAccount.currency = "z�";
	//firstAccount.owner = "Jan Kowalski";

	firstAccount.AccountInformation();
	//accountInformation(firstAccount);

	BankAccount secondAccount(15000, "Ewa Nowak", "z�");
	//secondAccount.SetBalance(15000);
	//secondAccount.balance = 15000;
	//secondAccount.currency = "z�";
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
