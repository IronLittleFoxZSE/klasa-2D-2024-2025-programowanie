// InheritanceConsoleApplication.cpp 

#include <iostream>
#include "SavingBankAccount.h"

int main()
{
    //Napisz klasy kt�re opisz� figury geometryczne: 
    // trapez, romb, r�wnoleg�obok, prostok�t i kwadrat.
    // Zdefiniuj podstawowe metody.

    //BankAccount b;
    //b.AccountInformation();

    SavingBankAccount savingBankAccount;
    savingBankAccount.AccountInformation();

    SavingBankAccount secondAccount(100, "Ewa Nowak", "z�", 0.1);
}