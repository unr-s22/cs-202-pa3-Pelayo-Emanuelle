#include <iostream>
#include "Money.h"
#include "Account.h"


int main()
{

	
	Money startBalance(300,23); //starting balance $300.23
	Account bank(startBalance); //Account with starting balance $300.23

	std::cout << bank << std::endl; //printing starting account balance to the terminal

	Money deposit1 (200, 0); //1st deposit money
	Money deposit2 (300,24); //2nd deposit money
	Money deposit3 (501,22); //3rd deposit money 

	//depositing all three quantities 
	bank.makeDeposit(deposit1); 
	bank.update();
	bank.makeDeposit(deposit2);
	bank.update();
	bank.makeDeposit(deposit3);
	bank.update();

	std::cout << bank << std::endl;

	Money withdrawal1(300,10); // $300.10 to be withdrawn
	Money withdrawal2(201,34); // 201.34 to be withdrawn 

	//withdrawing both quantities 
	bank.makeWithdrawal(withdrawal1);
	bank.withdrawUpdate();
	bank.makeWithdrawal(withdrawal2);
	bank.withdrawUpdate();

	//printing account again to the terminal 
	std::cout << bank << std::endl;


	return 0;

}









//checking if << operator overload works
/*	Money m(100, 10);
	std::cout << m << std::endl;
*/ 

//checking if <, >operator overload works
/*
	Money m(100,10);
	Money n(110, 10);

	if (n > m)
	{
		std::cout <<  "This shit works" << std::endl;
	}
	else 
	{
		std::cout << "nah";
	}
*/

//checking if != works 
/*
	Money m(100,10);
	Money n(110, 10);

	if (n != m)
	{
		std::cout <<  "This shit works" << std::endl;
	}
	else 
	{
		std::cout << "nah bro";
	}
*/


//checking if == works 
/*
	Money m(110,10);
	Money n(110, 10);

	if (n == m)
	{
		std::cout <<  "This shit works" << std::endl;
	}
	else 
	{
		std::cout << "nah bro";
	}
*/

//testing + operator 
/*
	Money m(110,10);
	Money n(110, 99);
	Money p = m+n;
	std::cout << p <<std::endl;
*/

//testing - operator 
/*
	Money m(110,10);
	Money n(50, 20);
	Money p = m-n;
	std::cout << p <<std::endl;
*/

//checking <=, >=
/*
	Money m(100,10);
	Money n(100, 12);

	if (n >= m)
		std::cout <<  "ye" << std::endl;
	else
		std::cout << "nah" << std::endl;
*/

/*checking deposit update
	Money start(50,0);
	Account bank(start);
	Money check(25,50);
	bank.makeDeposit(check);
	bank.update();
	Money check2(10,15);
	bank.makeDeposit(check2);
	bank.update();

*/

//checking withdrawal update, << overload. (both work)

/*
	Money start(50,0);
	Account bank(start);
	Money check(25, 0);
	bank.makeDeposit(check);
	bank.makeWithdrawal(check);
	bank.withdrawUpdate();

	//std::cout << bank << std::endl;
*/





