#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers.
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largets number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largst = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}