#include <iostream>  // Library for output data, it can print something on screen

using namespace std; // Allows to reuse the same function name for differents actions.

int main(void)
{
	// Integer variable declaration
	int n1 = 10;
	int n2 = -n1;
	int sum;

	// character variable declaration	
	char c1 = 'a';
	char c2 = 'b';
	char c3 = '\''; // To attribute single quotes to variable it must set before a '\' character 
	
	// Performs the sum between two character variables
	sum = c1 + c2; // Return the sum of ARCII value corresponding to the 'a' and 'b'
	
	// Prints values on screen
	cout << n1++ << endl;
	cout << n2   << endl;
	cout << c1   << endl;
	cout << c2   << endl;
	cout << sum  << endl;
	cout << c3   << endl;
	
	return 0; // Return 0, a integer solictated by int function
}