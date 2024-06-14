/*******************************************************************************
 * Name: Function_Name_Overloading.cpp
 * Author:	Roniere Rezende
 * Date: 13/06/2024
 * Comments: 
 ******************************************************************************/
 
 #include <iostream>  // library for output data, it can print something on screen.
 
 using namespace std; // Allows to reuse the same function name for differents actions.
 
 // Function Prototype 
 void message(int n);
 void message(char c);
 void message(void);
 int sum(int n1, int n2);
 int sum(int n1, int n2, int n3);
 
 // Main Function
 int main(void)
 {
 	 // Calling function message
	 message(10);
	 message('R');
	 message();
	 
	 // Prints on screen
	 cout << sum(1, 2) << endl;
	 cout << sum(1, 2, 3) << endl;
	 
	 return 0;
 }
 
 // Message, argument int
 void message(int n)
 {
 	cout << "Number: " << n << endl;
 }
 
 // Message, argument char
  void message(char c)
 {
 	cout << "Character: " << c << endl;
 }
 
 // Message, no argument
 void message(void)
 {
 	cout << "Hello World" << endl;
 }
 
 // Sum between two variables
 int sum(int n1, int n2)
 {
 	return (n1 + n2);
 }
 
 // Sum among three variables
 int sum(int n1, int n2, int n3)
 {
 	return (n1 + n2 + n3);
 }