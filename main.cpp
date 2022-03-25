#include <iostream>
#include "Money.cpp"



int main()
{

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
