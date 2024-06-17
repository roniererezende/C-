/*******************************************************************************
 * Name:     Pointers_Cont.cpp
 * Author:   Roniere Rezende
 * Date:   	 17/06/2024
 * Comments: Code examples for pointers
 * 
 ******************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
	// Variable Declaration
	int array[] = {1, 2, 3, 4, 5}; // Array declaration
	int* parray = &array[0];       // Pointer declaration an initialization, 
								   // pointer receives the first address of array
    int** pparray = &parray;	   // Pointer to pointer. pparray stores address of parray.
    int*** ppparray = &pparray;    // Pointer to pointer to pointer.
 	cout << **pparray << endl;
 	cout << ***ppparray << endl;
	 	
	int i = 0;
	
	char name[100];				   // Declaring a vector
	int  len;					   // Receives the length of vector
	char* p;	                   // Pointer 'p'
	char* pini;;                   // Pointer 'pini'
	
	cout << parray  << endl;	   // Shows the address of parray
	cout << *parray << endl;	   // Shows the content in first address of parray 
	
	cout <<    array[1]     << endl; // Prints the content of array in position 1
	cout << *(parray + 1) << endl;   // Prints the content that pointer parray points
	
	// Access the content of parray
	while(i < 5)
	{
		cout << parray  << endl;
		cout << *parray << endl;
		parray++;
		i++;
	}
	
	cout << "Type a name: ";
	cin  >> name;
	 
	len = strlen(name); // len receives length of name vector
	p  = &name[len -1]; // Receives the address name[len-1], that is, the last position of name 
	pini = &name[0];	// Receives the address the first position of name
	
	// Invert vector name	  
	while(true)
	{
		cout << *p;
		if(p-- == pini)
			break;
	}
	cout << endl;
	return 0;
}
