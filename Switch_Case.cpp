/*******************************************************************************
 * Name: Switch_Case.cpp
 * Author:	Roniere Rezende
 * Date: 12/06/2024
 * Comments: Code using switch->case
 ******************************************************************************/
#include <iostream>	 // library for output data, it can print something on screen.

using namespace std; // Allows to reuse the same function name for differents actions.

// main function
int main(void)
{
	// Variable declaration
	int n1 = 12;   // Integer variable declaration
	char op = 'Q'; // Character variable declaration
	
	// switch using integer variable
	switch(n1)
	{
		case 9:
			cout << "Number 9." << endl;
		break;
		
		case 10:
			cout << "Number 10." << endl;
		break;
	
		case 11:
			cout << "Number 11." << endl;
		break;
	
		default:
			cout << "Number doesn't found!" << endl;
        break;
	}
	
	// switch using character variable
	switch(op)
	{
		case 'Q':
    	case 'q':
			cout << "You went out of system." << endl;
 		break;
 		
 		default:
 			cout << "Unexisting command." << endl;
        break;
		
	}
	return 0; // Return 0, a integer solictated by int function
}