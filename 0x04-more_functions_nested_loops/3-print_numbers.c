#include "main.h"
/**
 * print_numbers - prints number since 0 up to 9
 * Return: The number 0 up to 9
 */
void print_numbers(void)
{
	int p;

	for (p = '0'; p <= '9'; p++)
	{
		_putchar(p + '0');
	}
	_putchar('\n');
}
