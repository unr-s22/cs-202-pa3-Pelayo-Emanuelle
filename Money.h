#ifndef MONEY_H
#define MONEY_H
#include <iostream>
#include <iomanip>

class Money 
{
	private:
	
	int dollars, cents; //declaration of dollars and cents variables



	public: 

	Money(); //Default constructor
	Money(int d, int c); //Constructor taking both dollars and cents 


	friend std::ostream& operator << (std::ostream& output, Money &money) //overloaded << operator (works)
	{
		output << "$" << money.dollars << "." << std::setw(2) << std::setfill('0') << money.cents; // what we want to output | iomanip so that cents are displayed with 0 in front when less than 10
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

		if (new_money.cents >= 100) {	//cents carry over to a dollar when over 100
			new_money.dollars += 1;
			new_money.cents -=100;
		}
	
		return new_money;

	}


	Money operator - (const Money money) {	// - overload (works)
		Money new_money;
		new_money.dollars = dollars - money.dollars;
		new_money.cents = cents - money.cents;

		if (new_money.cents < 0) {	//cents take from dollars when negative
			new_money.dollars -= 1;
			new_money.cents += 100;
		}

		return new_money;
	}


	bool operator <= (const Money& money) {	//overloading <= (woorks)
		if (dollars < money.dollars) {
			return true;
		}
		if (dollars == money.dollars && cents <= money.cents) {
			return true;
		}

		return false;
	}


	bool operator >= (const Money& money) { //overloading >= (works)
		if (dollars > money.dollars) {
			return true;
		}
		if (dollars == money.dollars && cents >= money.cents) {
			return true;
		}

		return false;
	}


};

#endif 
