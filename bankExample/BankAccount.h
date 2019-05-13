#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <iostream>
class BankAccount
{
	private:
		std::string name;
		int balance;
		bool isBankrupt;	

	public:
		BankAccount(std::string n, int bal, int bankrupt = false)
		{
			name = n;
			balance = bal;
			isBankrupt = bankrupt;
		}

		int getBalance()
		{
			return balance;
		}
		
		std::string getName()
		{
			return name;
		}

		void deposit(int inc)
		{
			balance += inc;
		}

		void withdrawal(int dec)
		{
			if (isBankrupt) std::cout << "You are bankrupt. You cannot withdraw any\
			   	more money";
			else balance -= dec; 
		}

		void declareBankruptcy()
		{
			std::cout << name << " is now bankrupt" << std::endl;
			isBankrupt = true;
		}

		
};
#endif
