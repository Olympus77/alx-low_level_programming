#include "main.h"
/**
 * print_numbers - prints number since 0 up to 9
 * Return: The number 0 up to 9
 */
void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
