#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int sta;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	sta = (len + 1) / 2;

	for (i = sta; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
