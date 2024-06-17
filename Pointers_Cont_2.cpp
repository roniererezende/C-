/*******************************************************************************
 * Name:     Pointers_Cont_2.cpp
 * Author:   Roniere Rezende
 * Date:   	 17/06/2024
 * Comments: Code examples for pointers
 * 
 ******************************************************************************/

#include <iostream>

using namespace std;

// Function Prototype
char * my_strcat(char * dest, char * orig);
int my_strlen(char * str);

// Main Function
int main(int argc, char *argv[])
{
	// Allocates memories spaces for two strings, name_1 and name_2
	char * name_1 = new char[100];
	char * name_2 = new char[100];
	
	// Solicitates to user types the strings
	cout << "Type the first name: ";
	cin  >> name_1;
	cout << "Type the second name: ";
	cin  >> name_2;
	
	// Prints the lenght the string name_1
	cout << my_strlen(name_1) << endl;
	
	// Prints the result of concatenations between name_1 and name_2
	cout << "Result: " << my_strcat(name_1, name_2) << "\n";
	return 0;
}

/*
 *	Function: char * my_strcat(char * dest, char * orig)
 *	Description: Concatenates two strings
 *	Return: result
*/
char * my_strcat(char * dest, char * orig)
{
	char * result = NULL;           // Declarate pointer result and clear it
	int len_dest = my_strlen(dest); // Receive the length of dest string
	int len_orig = my_strlen(orig); // Receive the length of orig string
	
	result = new char[len_dest + len_orig]; // Allocates memory space summing the length of dest and orig
	char *p_str = result; // Declarates pointer p_str points it to result
	
	// Store all characters of dest in p_str
	while(*dest != '\0')  
	{
		*p_str = *dest;
		p_str++;
		dest++;
	}
	// Store all characters of orig in p_str, together dest making concatenate between strings
    while(*orig != '\0')
	{
		*p_str = *orig;
		p_str++;
		orig++;
	}
	*p_str = '\0';	
	return result;
}

/*
 *	Function: int my_strlen(char * str)
 *	Description: Calculates the length of string
 *	Return: len
*/
int my_strlen(char * str)
{
	int len = 0;
	
	// Calculates the length of string
	while(*str != '\0')
	{
		str++;
		len++;
	}
	
	return len;
}