#include <iostream>  // Library to print something in screen.
#include "Math.h"

using namespace std; // Allows to reuse the same function name for differents actions.

int main(void)
{
	// Variable declaration
	int n = 5;// Integer variable that stores age
	int height = 10; // Integer variable that stores age
	
	
	// Prints on screen the factorial, square area, and rectangle area
	cout << "Factorial of " << n << ": " << factorial(n) << endl;
	cout << "Area of square with side " << n << ": " << square_area(n) << endl;
	cout << "Area of rectange " << rectangle_area(n, height) << endl;
	
	return 0;// Return 0, a integer solictated by int function
}