#include <iostream>  // library for output data, it can print something on screen

using namespace std; // Allows to reuse the same function name for differents actions.

int main(void)
{
	// Variable declaration
	int n1, n2, n3, result_sum, result_sub, result_mult_1, result_mult_2, result_rest, 
		result_incr_1, result_incr_2, result_dec_1, result_dec_2;
	float result_div_1, result_div_2;
	
    // Variable initialization
	n1 = 20;
	n2 = 10;
	n3 = 0;

	// Sum operation
	result_sum  = n1 + n2;

	// Subtraction operation
	result_sub  = n1 - n2;
		
	// Multiplication operation
	result_mult_1 = n1 * n2;
	
	// Division operation
	result_div_1  = (float)n1 / n2; // Using explicit cast
	
	// Rest of division
	result_rest = n1 % n2;

	// Precedence order
	n3 = (n1 + n2) / 2; 
	
    // Unary multiplication operator *=	
	n1 *= 3;
	result_mult_2 = n1;
	
    // Unary division operator /=
	n1 /= 2;
	result_div_2  = n1;
	
	// Unary sum operator ++
	n1++; // n1 = n1 + 1
	result_incr_1 = n1;
	
	// Unary sum operator +=
	n1 += 1; 
	result_incr_2 = n1;
	
    // Unary subtraction operator --
	n2--; // n2 = n2 - 1 
	result_dec_1  = n2;
	
    // Unary subtraction operator -=
	n2 -= 5;
	result_dec_2 = n2;
	
	// Print ond screen results
	cout << result_sum    << endl;
	cout << result_sub    << endl;
	cout << result_mult_1 << endl;
	cout << result_div_1  << endl;
    cout << result_rest   << endl;	
	cout << n3            << endl;
	cout << result_mult_2 << endl;
    cout << result_div_2  << endl;
	cout << result_incr_1 << endl;
	cout << result_incr_2 << endl;
	cout << result_dec_1  << endl;
	cout << result_dec_2  << endl;
		
	return 0; // Return 0, a integer solictated by int function
}