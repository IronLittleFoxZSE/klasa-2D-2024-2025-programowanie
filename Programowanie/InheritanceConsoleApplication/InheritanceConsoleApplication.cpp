// InheritanceConsoleApplication.cpp 

#include <iostream>
#include "SavingBankAccount.h"

int main()
{
    SavingBankAccount savingBankAccount;
    savingBankAccount.AccountInformation();

    SavingBankAccount secondAccount(100, "Ewa Nowak", "z�", 0.1);
}