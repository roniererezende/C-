/*******************************************************************************
 * Name:     Char_Arrays.cpp
 * Author:   Roniere Rezende
 * Date:   	 15/06/2024
 * Comments: Code examples for character arrays (strings)
 * 
 ******************************************************************************/
 #include <iostream>  // library for output data, it can print something on screen
 #include <string.h>  // Library for string manipulation
 
 using namespace std; // Allows to reuse the same function name for differents actions.
 
// Function Prototype
void invert_string(char name[]);
 
// Main function
int main(int argc, char *argv[])
{
	// Arrays declaration
	char name_1[] = {'R','o','n','i','e','r','e', '\0'}; // In this type of initialization, 
	 	 	 	 	 	 	 	 	 	 	 	 	     // it should be included in last position of 
													     // char array the character '\0'
													  
													     // '\0' -> Indicates end of string
													  
	char name_2[] = "Roniere";							 // In this initialization form, the character	
	 	 	 	 	 	 	 	 	 	 	 	 	     // '\0' is inserted in the last position automatically
	
	char name_3[] = "Rezende";
	
	char name_4[100], nickname[100];
	
	char str_1[100], str_2[100];
																																int i = 0;
	char c = 'R';
	
	// Print on screen the strin contained in name_1 and name_2 arrays
	cout << name_1 << endl;
	cout << name_2 << endl;
 	
 	// Using while loop to print on screen contained in string arrays
	while(name_1[i] != '\0') // While value is different of '\0, it runs block below
	{
		cout << name_1[i];
		i++;
	}
	cout << endl; // Jumps one line
	
	i = 0;
	while(name_2[i] != '\0')
		cout << name_2[i++]; // Reads the value of i and after it's incremented
	
	cout << endl; // Jumps one line
	
	// Repetition structure do -> while, at least loop one time
	i = 0;
	do
	{
		cout << name_3[i]; 
	}
	while(name_3[i++]); // Test expression in the end of loop. At least loop is performed
	
	cout << endl; // Jumps one line
	i = 0;	
	name_3[0] = 'a';	
	do
	{
		cout << name_3[i]; 
	}
	while(name_3[i++]); // Test expression in the end of loop. At least loop is performed
	
	cout << endl; // Jumps one line
	invert_string(name_3);
//------------------------------------------------------------------------------ 	
	cout << endl; // Jumps one line
	// Checks whether character is an alphabetic letter
	if(isalpha(name_1[0])) // name_1[0] = 'R'
		cout << "Alphabetic Character" << endl;
	else
		cout << "Numeric Character" << endl;
//------------------------------------------------------------------------------		
	cout << endl; // Jumps one line
	// Checks whether character is a decimal digit character
	if(isdigit(name_2[0]))
		cout << "Number" << endl;
	else
		cout << "Letter" << endl;
//------------------------------------------------------------------------------
	cout << endl;
	// Checks if parameter is an uppercase alphabetic letter
	if(isupper(name_2[0]))
		cout << "Uppercase" << endl; 
	else
		cout << "Lowcase"   << endl;
//------------------------------------------------------------------------------	
	cout << endl;
	// Checks whether parameter is a lowercase letter
	if(islower(name_2[0]))
		cout << "Lowcase"   << endl; 
	else
		cout << "Uppercase" << endl;	
//------------------------------------------------------------------------------	
	cout << endl;
	// Checks whether parameter is a white-space character
	if(isspace(name_2[0]))
		cout << "It's space"     << endl; 
	else
		cout << "It isn't space" << endl;
	
//------------------------------------------------------------------------------	
	cout << endl;
	// Compares the string name_1 to the string name_2
	if(strcmp(name_1, name_2))
		cout << "Strings are equal"     << endl; 
	else
		cout << "Strings are differents" << endl;
//------------------------------------------------------------------------------
	// Convertes c its lowercase equivalent if c is an uppercase letter 
	// and has a lowercase equivalent.
	c = tolower(c);
	cout << c << endl;
	
//------------------------------------------------------------------------------
	// Convertes c its uppercase equivalent if c is an lowercase letter 
	// and has a uppercase equivalent.
	c = toupper(c);
	cout << c << endl;	
	
//------------------------------------------------------------------------------
	// Get name and nickname from user
	cout << "Type your name: ";
	cin  >> name_4;
	cout << "Type your nickname: ";
	cin  >> nickname;
	
	// Appends a copy of the source string to the destination string
	strcat(name_4, nickname);
	cout << "Your name is " << name_4 << endl;
	
//------------------------------------------------------------------------------
    // Get name and nickname from user
	cout << "Type the first string: ";
	cin  >> str_1;
	cout << "Type the second string: ";
	cin  >> str_2;
	
	// Returns a pointer to the first occurrence of str2 in str1,
	// or a null pointer if str2 is not part of str1.
	if(strstr(str_1, str_2))
		cout << "It's substring"     << endl;
	else
		cout << "It isn't substring" << endl;
	
	return 0;
 }
 
 /*
 *	Function:    void invert_string(char name[])
 *	Description: There isn't return
 *	Return: 	 No return
 */
 void invert_string(char name[])
 {
 	// Get a length of string
 	int len_1;
 	int len_2;
 	for(len_1 = 0; name[len_1]; len_1++);
	
	for(int i = (len_1-1); i >= 0 ;i--)
		cout << name[i];

	cout << endl; // Jumps one line	
	len_2 = strlen(name);
	for(int i = (len_2-1); i >= 0 ;i--)
		cout << name[i];	
 }