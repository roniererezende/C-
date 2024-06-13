/*******************************************************************************
 * Name: While_Loop.cpp
 * Author:	Roniere Rezende
 * Date: 13/06/2024
 * Comments: Code using while loop
 ******************************************************************************/
#include <iostream>  // library for output data, it can print something on screen.

using namespace std; // Allows to reuse the same function name for differents actions.

// Main Function
int main(void)
{
	// Variable declaration
	int n = 1;
	
	// while loop testing if n is lower or equal 100 and print all number
	while(n <= 100)
	{
		if(n  > 50)
			break; // Exits of loop if n higher than 50
		cout << n << endl;
		n++;
	}
	
	n = 0;
	// while loop testing if n is lower or equal 100 and print only even number
    while(n <= 100)
	{
		if((n % 2) != false) // If n is odd, jump to next routine
		{
			n++;
			continue; // Returns in beginning of loop
		}
		cout << n << endl;
		n++;
	}
	
	// Nested while
	n = 0;
    // while loop testing if n is lower or equal 10 and print each number three times
	while( n <= 10)
	{
		int i = 0;
		while(i < 3) // Tests if i is lower than 3
		{
			cout << "Number: " << n << endl;
			i++;
		}
		n++;
	}

	return 0; // Return 0, a integer solictated by int function to finish code
}