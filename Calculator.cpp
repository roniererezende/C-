/*******************************************************************************
 * Name: Calculator.cpp
 * Author:	Roniere Rezende
 * Date: 12/06/2024
 * Comments: Simple Calculator
 * 			 Properties: -> Allowed Operation:
 * 							+ -> Addition
 * 							- -> Subtraction
 * 							* -> Multiplication
 * 							/ -> Division
 * 						
 ******************************************************************************/

#include <iostream>	 // library for output data, it can print something on screen.

using namespace std; // Allows to reuse the same function name for differents actions.

int main(void)
{
    // Variable declaration
	int n1, n2, result; // Integer variable declaration
	float div;			// Floating variable declaration
	char op;            // Character variable declaration, kind of operation
	
	// Data input
	cout << "Type the first number: ";
	cin >> n1;
	
	cout << "Type the second number: ";
	cin >> n2;
	
	cout << "Type the operation: ";
	cin  >> op;
	
	// Switch -> case: Operation Selection
	switch(op)
	{
		// Case -> Addition Operation
		case '+':
			result = n1 + n2;
			cout << "Sum: " << result << endl;
        break;
    
    	// Case -> subtraction Operation
		case '-':
			result = n1 - n2;
			cout << "Subtration: " << result << endl;
        break;

		// Case -> Multiplication Operation
		case '*':
			result = n1 * n2;
			cout << "Multiplication: " << result << endl;
        break;
    
    	// Case -> Multiplication Operation
		case '/':
			if(n2 != 0) // Tests if n2 is equal zero
			{
				div = (float)n1 / n2;
				cout << "Division: " << div << endl;				
			}
			else
			{
				cout << "Division by zero!" << endl;
			}
        break;
	    	
    	default:
    		cout << "Unexisting Operation!" << endl;
 		break;
	}
	
	return 0; // Return 0, a integer solictated by int function
}