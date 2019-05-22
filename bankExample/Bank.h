#ifndef BANK_H
#define BANK_H

#include <iostream>

// C++'s equivalent to ArrayList
#include <vector>
#include "BankAccount.h"
class Bank
{
	private:
		double totalBalance;
		std::vector<BankAccount> bankAccounts;

	public:
		BankAccount getBankAccount(int i)
		{
			return bankAccounts[i];
		}

		double getTotalBalance()
		{
			double sum = 0;
			for (double i = 0; i < bankAccounts.size(); i++)
			{
				// Could also do bankAccounts.at(i).getBalance();
				// C++ allows you to overload operators
				sum += bankAccounts[i].getBalance();
			}
			return sum;
		}

		// Setting a parameter to a value makes it so that the parameter is optional.
		// You can just do add("Example", "5000")
		void addNewBankAccount(std::string name, double bal, bool bankrupt = false)
		{
			bankAccounts.push_back(BankAccount(name, bal, bankrupt));
		}

		void addBankAccount(BankAccount x)
		{
			bankAccounts.push_back(x);
		}

		void removeBankAccount(int i)
		{
			// Uses an iterator for erasing AND inserting. I don't know the reason
			// for this
			bankAccounts.erase(bankAccounts.begin() + i); 
		}
};

#endif
