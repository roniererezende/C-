#include <iostream> // Library to print something in screen.
#include <stdio.h>  // Library that defines three variable types, 
					// several macros, and various functions for performing 
					// input and output.
#include <stdbool.h>// Library that contains four macros for a boolean data type.

using namespace std;

int main()
{
	int age;        // Integer variable that stores age
	float   height; // Floating variable that stores height 
	bool    gender; // Boolean variable that stores gender 
	
	age    = 39;	// age receiving the value 39
	height = 1.80;	// height receiving the value 1.8
	gender = 0;	    // gender receiving the value 0, representing gender male
	
	cout << age    << endl; // Prints age
	cout << height << endl; // Prints heightt
	cout << gender << endl;	// Prints gender (male = 0 / female = 1)
	
	return 0;
}