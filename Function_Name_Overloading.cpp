/*******************************************************************************
 * Name: Function_Name_Overloading.cpp
 * Author:	Roniere Rezende
 * Date: 13/06/2024
 * Comments: 
 ******************************************************************************/
 
 #include <iostream>
 
 using namespace std;
 
 void message(int n);
 void message(char c);
 void message(void);
 int sum(int n1, int n2);
 int sum(int n1, int n2, int n3);
 
 int main(void)
 {
	 message(10);
	 message('R');
	 message();
	 
	 cout << sum(1, 2) << endl;
	 cout << sum(1, 2, 3) << endl;
	 
	 return 0;
 }
 
 void message(int n)
 {
 	cout << "Number: " << n << endl;
 }
 
  void message(char c)
 {
 	cout << "Character: " << c << endl;
 }
 
 void message(void)
 {
 	cout << "Hello World" << endl;
 }
 
 int sum(int n1, int n2)
 {
 	return (n1 + n2);
 }
 
 int sum(int n1, int n2, int n3)
 {
 	return (n1 + n2 + n3);
 }