#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <iostream>
class BankAccount
{
	private:
		std::string name;
		double balance;
		bool isBankrupt;	

	public:
		BankAccount(std::string n, double bal, int bankrupt = false)
		{
			name = n;
			balance = bal;
			isBankrupt = bankrupt;
		}

		double getBalance()
		{
			return balance;
		}
		
		std::string getName()
		{
			return name;
		}

		void deposit(double inc)
		{
			balance += inc;
		}

		void withdrawal(double dec)
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
