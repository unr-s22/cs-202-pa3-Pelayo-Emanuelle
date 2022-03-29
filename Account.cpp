#include "Account.h"

Account::Account(Money m) : money(m) {}

void Account::makeDeposit(Money m) {
	deposits.push_back(m); 
	//std::cout << deposits.size() << std::endl;
	needsUpdate = true;
}


//withdrawals

void Account::makeWithdrawal(Money m) //works
{
	withdrawals.push_back(m);
	needsUpdate = true;

}


void Account::update() {
	//std::cout << money << std::endl;
	for(; dUpdate < deposits.size(); dUpdate++) {
		money = money + deposits[dUpdate];
	}
}





void Account::withdrawUpdate()
{
	
	for (; wUpdate < withdrawals.size(); wUpdate++)
	{
		money = money - withdrawals[wUpdate];
	}
	
}

	//needsUpdate = false;

