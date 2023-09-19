#include <stdio.h>
/**
 * swap_int - swap the values of two numbers.
 * @a: The first number to be swapped.
 * @b: The second number to be swapped.
 * Return: nothing
 */
void swap_int(int *a, int *b)
	/* the function that swaps the values of two numbers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
