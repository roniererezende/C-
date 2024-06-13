/*******************************************************************************
 * Name: Fatorial_Calculation.cpp
 * Author:	Roniere Rezende
 * Date: 13/06/2024
 * Comments: Fatorial Calculation
 * 			 0! = 1! = 1
 * 			 3! = 3 * 2	* 1 = 6
 * 			 4! = 4 * 3 * 2 * 1 = 24
 * 			 5! = 5 * 4 * 3 * 2 * 1 = 120
 ******************************************************************************/
#include <iostream>  // library for output data, it can print something on screen.

using namespace std; // Allows to reuse the same function name for differents actions.

// Main Function
int main(void)
{
	// Variable declaration
	int num, fat = 1;
	
	// Inform a number for calculate its factorial
	cout << "Type a number: ";
	cin >> num;
	
	// For loop using to calculate the fatorial
 	for(int i = 1; i < num; i++)
	{
		 fat = fat * (i + 1);
	}
	
	// Show the result of factorial calculation
	cout << "Fatorial: " << fat << endl;
	return 0;
}