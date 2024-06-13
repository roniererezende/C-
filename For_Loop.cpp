/*******************************************************************************
 * Name: For_Loop.cpp
 * Author:	Roniere Rezende
 * Date: 13/06/2024
 * Comments: Code using for loop
 ******************************************************************************/
#include <iostream>

using namespace std;

// Main Function
int main(void)
{
	// Variable declaration
	int i, j;
	// for loop with one index
	for(i = 1; i <= 100; i++)
	{
		cout << i << endl;
	}
	
	// for loop with two index
	for(i = 1, j = 1; i <= 10; i++, j++)
	{
		cout << i << endl;
		cout << j << endl;
	}
	
	return 0;
}