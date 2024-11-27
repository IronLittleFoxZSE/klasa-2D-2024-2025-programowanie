// InheritanceConsoleApplication.cpp 

#include <iostream>
#include "SavingBankAccount.h"

int main()
{
    //Napisz klasy które opisz¹ figury geometryczne: 
    // trapez, romb, równoleg³obok, prostok¹t i kwadrat.
    // Zdefiniuj podstawowe metody.

    //BankAccount b;
    //b.AccountInformation();

    SavingBankAccount savingBankAccount;
    savingBankAccount.AccountInformation();

    SavingBankAccount secondAccount(100, "Ewa Nowak", "z³", 0.1);
}