/*******************************************************************************
 * Name: Fatorial_Calculation.cpp
 * Author:	Roniere Rezende
 * Date: 13/06/2024
 * Comments: Fatorial Calculation
 * 			 0! = 1! = 1
 * 			 3! = 3 * 2	* 1 = 6
 * 			 4! = 4 * 3 * 2 * 1 = 24
 * 			 5! = 5 * 4 * 3 * 2 * 1 = 120
 * 
 ******************************************************************************/
#include <iostream>  // library for output data, it can print something on screen.

using namespace std; // Allows to reuse the same function name for differents actions.

// Function Prototype
bool par(int num);
void message(void);

// Main function
int main(void)
{
	// Variable Declaration
	int n;
	
	// message function -> Print on screen *Learning C++"
	message();
	
	// Insert any number
	cout << "Type a number: ";
	cin  >> n;
	
	// Indicate if number is even or odd
	if(par(n))
		cout << "The number " << n << " is even." << endl;
	else
		cout << "The number " << n << " is odd. " << endl; 
	
	return 0;
}

/*
 *	Function: bool par(int num)
 *	Description: Inform if number is even or false
 *	Return: even -> true
 *			odd  -> false
 */
	 
bool par(int num)
{
	if((num % 2) == 0)
		return true;
	return false;
}

/*
 *	Function: void message(void)
 *	Description: Prints on screen "LEARNING C++"
 *	Return: no return
*/
void message(void)
{
	cout << "LEARNING C++" << endl;
}