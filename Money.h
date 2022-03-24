#ifndef MONEY_H
#define MONEY_H
#include <iostream>

class Money 
{
	private:
	
	int dollars, cents; //declaration of dollars and cents variables



	public: 

	Money(); //Default constructor
	Money(int d, int c); //Constructor taking both dollars and cents 

	friend std::ostream& operator << (std::ostream& output, Money &money) //overloaded << operator (works)
	{
		output << "$" << money.dollars << "." << money.cents; // what we want to output 
		return output; //returning this to the main
	}


	bool operator < (const Money& money) //overloading < (works)
	{
		if (dollars < money.dollars)
		{
			return true;
		}
		if (dollars == money.dollars && cents < money.cents)
		{
			return true;
		}

		return false;
	}

	bool operator > (const Money& money) //overloading > (works)
	{
		if (dollars > money.dollars)
		{
			return true;
		}
		if (dollars == money.dollars && cents > money.cents)
		{
			return true;
		}

		return false;
	}

	bool operator != (const Money& money) //overloading != (works!)
	{
		if (dollars != money.dollars || cents != money.cents)
		{
			return true;
		}

		return false;
	}


	bool operator == (const Money money) //overloading == (works)
	{
		if (dollars == money.dollars && cents == money.cents)
		{
			return true;
		}

		return false; 
	}


	Money operator + (const Money money) //overloading + (works)
	{
		Money new_money;
		new_money.dollars = dollars + money.dollars;
		new_money.cents = cents + money.cents;

		return new_money;

	}

	//need to do =, <=, >=, -




};

#endif 
