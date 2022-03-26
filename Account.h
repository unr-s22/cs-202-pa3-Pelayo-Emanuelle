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
	std::vector<Money> deposits;
	std::vector<Money> withdrawals;
	void update();  //update main money instance with new deposits and withdrawals, call in << overload

public:
	Account(Money m);
	void makeDeposit(Money m); 

};

#endif 
