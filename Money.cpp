#include <iostream>
#include "Money.h"


Money::Money()
{
	dollars = 0; //assigning default value of 0 to dollars
	cents = 0; //assigning default value of 0 to cents 

}


Money::Money(int d, int c)
{
	std::cout << d << std::endl; //checking if inputted values work
	std::cout << c << std::endl; //checking if inputted values work
	dollars = d; //assigning inputted value to dollars
	cents = c; //assigning inputted value to cents 

}


