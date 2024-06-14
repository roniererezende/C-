/* This module contains math function */

/*******************************************************************************
 *	Function: int factorial(int n)
 *	Description: Performs factorial of n
 *	Return: the value of factoral
 ******************************************************************************/
int factorial(int n)
{
	int fat = 1;
	
	for(int i = 1; i < n;i++ )
	{
		fat = fat * (i + 1);
	}
	return fat;
}

/*******************************************************************************
 *	Function: int square_area(int side)
 *	Description: Performs square area of side
 *	Return: the value of aquare area
 ******************************************************************************/
int square_area(int side)
{
	return side * side;
}

/*******************************************************************************
 *	Function: int rectangle_area(int height, int base)
 *	Description: Performs rectangle area of height and base
 *	Return: the value of rectangle area
 ******************************************************************************/
int rectangle_area(int height, int base)
{
	return height * base;
}
