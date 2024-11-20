#include "BankAccount.h"

class SavingBankAccount : public BankAccount
{
private:

	double interestRate; //oprocentowanie

public:

	SavingBankAccount() //: BankAccount()
	{
		interestRate = 0.05;
	}

	SavingBankAccount(double b, std::string o, std::string c, double ir)
		: BankAccount(b, o, c)
	{
		interestRate = ir;
	}

	void CalculateInterestRate()
	{
		balance = balance + balance * interestRate;
	}
};

class X : SavingBankAccount
{

public:
	X()
	{

	}
};