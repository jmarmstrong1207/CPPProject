#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <vector>
#include "BankAccount.h"
class Bank
{
	private:
		int totalBalance;
		std::vector<BankAccount> bankAccounts;

	public:
		BankAccount getBankAccount(int i)
		{
			return bankAccounts[i];
		}

		int getTotalBalance()
		{
			int sum = 0;
			for (int i = 0; i < bankAccounts.size(); i++)
			{
				sum += bankAccounts[i].getBalance();
				// Could also do bankAccounts.at(i).getBalance();
			}
			return sum;
		}

		void addBankAccount(std::string name, int bal, int bankrupt = false)
		{
			bankAccounts.push_back(BankAccount(name, bal, bankrupt));
		}

		void removeBankAccount(int i)
		{
			// Uses an iterator for erasing AND inserting. I don't know why
			bankAccounts.erase(bankAccounts.begin() + i); 
		}
};

#endif
