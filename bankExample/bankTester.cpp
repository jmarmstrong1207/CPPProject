#include "Bank.h"
#include <iostream>

int main() 
{
    BankAccount davidsAccount("David",3000.00,false);
    
    BankAccount stevensAccount("Steven",1000.00);

    BankAccount zachsAccount("Zach",-200.00,true);

    BankAccount sarahsAccount("Sarah",5000.00);

    Bank bankOfAmerica;

    bankOfAmerica.addBankAccount(davidsAccount);
    bankOfAmerica.addBankAccount(stevensAccount);
    bankOfAmerica.addBankAccount(zachsAccount);
    bankOfAmerica.addBankAccount(sarahsAccount);

    std::cout << bankOfAmerica.getBankAccount(1).getBalance() << std::endl;
    std::cout << bankOfAmerica.getBankAccount(4).getName() << std::endl;

    std::cout << bankOfAmerica.getTotalBalance() << std::endl;
    bankOfAmerica.removeBankAccount(1);

    std::cout << bankOfAmerica.getTotalBalance() << std::endl;





}
