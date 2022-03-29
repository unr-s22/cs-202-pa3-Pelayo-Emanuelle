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
	bank.makeDeposit(deposit2);
	bank.makeDeposit(deposit3);

	std::cout << bank << std::endl;	//balance updated when << used

	Money withdrawal1(300,10); // $300.10 to be withdrawn
	Money withdrawal2(201,34); // 201.34 to be withdrawn 

	//withdrawing both quantities 
	bank.makeWithdrawal(withdrawal1);
	bank.makeWithdrawal(withdrawal2);

	//printing account again to the terminal 
	std::cout << bank << std::endl;




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


	return 0;

}

