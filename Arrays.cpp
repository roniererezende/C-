/*******************************************************************************
 * Name:     Arrays.cpp
 * Author:   Roniere Rezende
 * Date:   	 15/06/2024
 * Comments: Code examples for arrays
 * 
 ******************************************************************************/
#include <iostream>  // library for output data, it can print something on screen

using namespace std; // Allows to reuse the same function name for differents actions.

int main(void)
{
	// Vector declaration with different forms to initialize
	int vector_1[100];
	int vector_2[4] = {1, 2, 3, 4};
	int vector_3[] = {5, 4, 3, 2};
	int vector_4[100] = {0};
	char vector_5[5] = { '1', '2', '3', '4', '5'};
	
	// Initialize vecto_1
	for(int i = 0; i < 100; i++)
		vector_1[i] = i;
	
	// Prints value contained in vectors
	for(int i = 0; i < 100; i++)
		cout << vector_1[i] << endl;
	
	for(int i = 0; i < 4; i++)
		cout << vector_2[i] << endl;
	
	for(int i = 0; i < 4; i++)
		cout << vector_3[i] << endl;
	
	for(int i = 0; i < 100; i++)
		cout << vector_4[i] << endl;
	
	for(int i = 0; i < 5; i++)
		cout << vector_5[i] << endl;
	
	// Accesses a certain posotion in vector, returns contained in this position
	cout << "Seconde element of vector_2: " << vector_2[1] << endl;
	cout << "Last element of vector_5: " << vector_5[4] << endl;
	
	// Returns the number of occupped bytes in vector
	cout << "Number of bytes that vector_2 occups: " << sizeof(vector_2) << endl;
	cout << "Number of bytes that vector_5 occups: " << sizeof(vector_5) << endl;
	
	return 0;
}