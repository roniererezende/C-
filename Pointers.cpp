#include <iostream>  // library for output data, it can print something on screen.

using namespace std; // Allows to reuse the same function name for differents actions.

// Function Prototype
void foo_pass_value(int n);
void foo_pass_reference(int* n);
void foo_vector(int vec[]);

// Main function
int main(void)
{
	// Variable declaration
	int var = 10;
	int *pvar;
	
	// Memory Allocation
	int* parray = new int[10];   // It's allocating in memory space for 10 integers
	int aux[10];              // Vector declaration
	
	pvar = &var;              // Address of variable var
	
	cout << *pvar << endl;    // Reads the content of pvar
	
	*pvar = 30;				  // Pass value address of var
	cout << var << endl;;
	
	foo_pass_value(var);      // Parameter -> value of  variable "var"
	cout << var << endl;
 
	foo_pass_reference(pvar); // Parameter -> address of  variable "var"
	cout << var << endl;
	
	var = 45;
	foo_pass_reference(&var); // Parameter -> address of  variable "var"
	cout << var << endl;
	
//------------------------------------------------------------------------------
    /* Memory Allocation */
    *(parray + 0) = 10;
    *(parray + 1) = 20;
    *(parray + 2) = 30;
    *(parray + 3) = 40;
    
    aux[0] =  11;
    aux[1] =  22;
    aux[2] =  33;
    aux[3] =  44;
    aux[4] =  55;
    aux[5] =  66;
    aux[6] =  77;
    aux[7] =  88;
    aux[8] =  99;
    aux[9] = 110;
    
	cout << *(parray + 0) << endl;
	cout << *(parray + 1) << endl;	
	cout << *(parray + 2) << endl;
	cout << *(parray + 3) << endl;
	
	cout << *(aux + 0) << endl; // Similar to aux[0]
	cout << *(aux + 1) << endl;	// Similar to aux[1]
	cout << *(aux + 2) << endl;	// Similar to aux[2]
	
	// *(aux + 0) = aux[0] = aux
	
	foo_vector(aux);
	
	for(int i = 0; i < (sizeof(aux)/sizeof(int)); i++) // sizeof(aux)/sizeof(int) -> Indicate length of vector
		cout << aux[i] << endl;	
		
	cout << "Type a number: ";
	cin >> *(aux);  // * -> Read a content of aux
	cout << "You typed: " << aux[0] << endl;
	
	cout << "Type a number: ";
	cin >> *(aux + 1);
	cout << "You typed: " << aux[1] << endl;

	cout << "Type a number: ";
	cin >> *(parray);
	cout << "You typed: " << parray[0] << endl;
	
	cout << "Type a number: ";
	cin >> *(parray + 1);
	cout << "You typed: " << parray[1] << endl;
	
	cout << "You typed: " << parray[5] << endl;
	
	delete[] parray; // Deallocated array "parray"
	
	cout << "You typed: " << parray << endl;
	
	return 0;
}

void foo_pass_value(int n) // Pass by value, user passes a copy of variable to the parameter
{
	n = 20;
}
// Argument: pointer to integer, thus it gets modify value of variable passing its address
void foo_pass_reference(int* n)
{
	*n = 20;
}

void foo_vector(int vec[]) // The vector name is a address of first element
{
	vec[0] = 100;
}