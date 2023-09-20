#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 */
void print_rev(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}

	for (p -= 1; p >= 0; p--)
	{
		_putchar(s[p]);
	}
	_putchar('\n');
}
