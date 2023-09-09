#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Alphabet in lowercase followed by uppercase
 * Return: Always 0 (success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
