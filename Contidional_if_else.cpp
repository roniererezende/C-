#include <iostream>  // Library for output data, it can print something on screen

using namespace std; // Allows to reuse the same function name for differents actions.

// Main function
int main(void)
{
	// Declaring integer variables
	int money = 9, num = 10;
	int n = 10;
	
	// Declaring boolean variables
	bool var = 10 < 20;
	bool var1 = false;
	bool var2 = true;
	bool var3 = true;
	
	// Examples of conditional using "if"
	if(money > 10) // True, if "money" value is higher than 10 
	{
		cout << "I'm going to the movie theater!"    << endl;
	}
	else
	{
		cout << "I'm not going to the movie theater!" << endl;
	}
	
	if(num > 10) // True, if "num" value is higher than 10 
	{
		cout << "Number higher than 10." << endl;
	}
	
	if(num >= 10) // True, if "num" value is higher or equal to 10 
	{
		cout << "Number is higher or equal to 10." << endl;
	}
	
	if(num == 10) // True, if "num" value is equal to 10 
	{
		cout << "Number equal to 10." << endl;
	}
	
	if(num < 10) // True, if "num" value is lower than 10 
	{
		cout << "Number higher than 10." << endl;
	}
	
	if(num <= 10) // True, if "num" value is lower or equal than 10 
	{
		cout << "Number higher than 10." << endl;
	}
	
	if(num != 10) // True, if "num" value is lower or equal than 10 
	{
		cout << "Number is different of 10." << endl;
	}
	
	if(num != 10) // True, if "num" value is lower or equal than 10 
		cout << "Number is different of 10." << endl;
	
	++num;
	
	cout << num << endl;
	
	// Nested if and else, example:
	if(num > 5)
	{
		if(num <= 10)
		{
			cout << " Number higher than 5 and lower than 10" << endl;	
		}
		else
		{
			cout << "Only test" << endl;
		}
	}
	
	// Logical operator being used in "if" conditional
	/* AND -> && [Both expression must be true to perform block in if]*/
	if((n % 2 == 0) && n < 20)
	{
		cout << "Number is even and lower than 20" << endl;
	}
	
	/* OR -> || [Only one expression must be true to perform block in if]*/
	if((n % 2 == 0) || n < 20)
	{
		cout << "One of condition is true!" << endl;
	}
	
    /* NOT -> ! [Both expression must be false to perform block in if]*/
	if(!(n % 2 == 0)) // Tests the invert of condition
	{
		cout << "Number is odd" << endl;
	}
	
	/* NOT -> || [Both expression must be false to perform block in if]*/
	if((n % 2 == 0) || n < 20)
	{
		cout << "Both condition is false!" << endl;
	}
	
	// test the logical state of "var"
	if(var)
	{
		cout << "True" << endl;		
	}

	// test the logical state of "var"
	if(var == true)
	{
		cout << "True" << endl;		
	}
	
	// test the logical state of "var"
	if(var != false)
	{
		cout << "True" << endl;		
	}
	
	// test the logical state of "var"
	/* Using NOT operator to test var*/
	if(!var)
	{
		cout << "False" << endl;		
	}
    
	/* Testing if both variables are true */
	if(var1 && var2)
	{
		cout << "Both variable are true" << endl;
	}
	
    /* Testing if both variables are true */
	if(var3 && var2)
	{
		cout << "Both variable are true" << endl;
	}
	
    /* Testing if var1 is false and var2 is true */
	if(!var1 && var2)
	{
		cout << "var1 is false and var2 is true" << endl;
	}
	
	return 0;
}