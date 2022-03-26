#include "Account.h"

Account::Account(Money m) : money(m) {}

void Account::makeDeposit(Money m) {
	deposits.push_back(m); 
	//std::cout << deposits.size() << std::endl;
	needsUpdate = true;
}


//withdrawals


void Account::update() {
	//std::cout << money << std::endl;
	for(; dUpdate < deposits.size(); dUpdate++) {
		money = money + deposits[dUpdate];
	}
	
	


	//withdraw update






	//std::cout << money << std::endl;

	needsUpdate = false;
}
