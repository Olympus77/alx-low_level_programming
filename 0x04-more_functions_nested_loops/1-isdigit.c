#include "main.h"
/**
 * _isdigit - checks for a digit character
 * @c: The character to check
 * Return: 1 if c is a digit or 0 anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
