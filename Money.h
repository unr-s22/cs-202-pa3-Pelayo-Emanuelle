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
		output << money.dollars << "." << money.cents; // what we want to output 
		return output; //returning this to the main
	}



};