/*******************************************************************************
 * Name: Hello_World.cpp
 * Author:	Roniere Rezende
 * Date: 07/06/2024
 * Comments: The first test program in C++ language programming
 ******************************************************************************/
	   	
#include <iostream> // library for output data, it can print something on screen

using namespace std; // Allows to reuse the same function name for differents actions.

int main (int argc, char *argv[])
//	argc -> A integer that contains the argumens countaing that follows in argv
//	argv -> A array of null-terminated string representing command-line 
//          arguments entered by the program user	
{
	cout << "Hello World!" << endl;	// Print "Hello World" on screen / endl -> jump one line
	return 0;						// Return 0, a integer solictated by int function
}
