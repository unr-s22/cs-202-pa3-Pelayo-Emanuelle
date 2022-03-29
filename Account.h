#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <vector>
#include "Money.h"

class Account {
private:

	Money money;
	bool needsUpdate = false;
	int dUpdate = 0; //index for deposits that have been updated in final balance, only the deposits after the index are calculated in update function
	int wUpdate = 0; //index for updated withdrawals
	std::vector<Money> deposits;
	std::vector<Money> withdrawals;
	void update();  //update main money instance with new deposits and withdrawals, call in << overload

public:

	Account(Money m);
	void makeDeposit(Money m); 
	void makeWithdrawal(Money m);
	//void update();

	friend std::ostream& operator << (std::ostream& output, Account& account) // << overload that prints the account statement (works)
	{
		if(account.needsUpdate == true)
			account.update();
		
		output << "Account Details" << std::endl;

		output << "--------------------------" << std::endl; 

		output<< "Current Balance:" << account.money << std::endl; //displaying current balance 

		output << "--------------------------" << std::endl;

		output << "Number of Deposits:" << " " << account.deposits.size() << std::endl; //displaying total number of deposits 

		output << "--------------------"<< std::endl;

		//int w for counting up to size of deposits vector
		for(int i = 0; i < account.deposits.size(); i++) //displaying the number of the deposit before the deposit total (+1 b/c index starts at 0)
		{
			output << "(" << i+1 << ")" << " " << account.deposits[i] << std::endl;
		}


		output << "Number of Withdrawals: " << account.withdrawals.size() << std::endl; //displaying number of withdrawals 

		output << "--------------------"<< std::endl;


		//int w for counting up to size of withdrawals vector
		for(int w = 0; w < account.withdrawals.size(); w++) //displaying the number of the withdrawal before the deposit total (+1 b/c index starts at 0)
		{
			output << "(" << w+1 << ")" << " " << account.withdrawals[w] << std::endl;
		}

		
		return output; //returning this whole function output to the main
	}








};

#endif 
