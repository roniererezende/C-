#include <iostream>
#include <stdio.h>
#include <stdbool.h>

using namespace std;

int main()
{
	int age;    // integer variable that stores age
	float   height; // floating variable that stores height 
	bool    gender; // bool variable that stores gender 
	
	age    = 39;
	height = 1.80;
	gender = 0;
	
	cout << age    << endl; // Prints age
	cout << height << endl; // Prints heightt
	cout << gender << endl;	// Prints gender (male = 0 / female = 1)
	
	return 0;
}