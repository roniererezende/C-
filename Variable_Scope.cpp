/*******************************************************************************
 * Name:     Variable_Scope.cpp
 * Author:	 Roniere Rezende
 * Date:     14/06/2024
 * Comments: 
 ******************************************************************************/
 #include <iostream>  // library for output data, it can print something on screen
 
 using namespace std; // Allows to reuse the same function name for differents actions.
 
 // Function Prototype
 void foo(void);
 
 // Global Variable Declaration
 int num_global = 12;
 
 // Main Function
 int main(void)
 { 
 	// Function foo() called three times
	foo();
	foo();	 	 
	foo();
	
	return 0; // Return 0, a integer solictated by int function
 }
 
 /*
 *	Function: void foo(void)
 *	Description: Test function used for several called
 *	Return: There isn't return
 */
 void foo(void)
 {
 	// Local Variable Declaration
	int num = 10;
	static int num_static = 1; // This variable doesn't delete of memory 
                               // when function is called again.
                               // So, it keeps value from called to other
	
    // Prints on screens variables values 
    cout << "Local Variable: "  << num         << endl;
	cout << "Global Variable: " << num_global  << endl;
	num_static++;
    cout << "Static Variable: " << num_static << endl;
 }