#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, by a new line
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;
	for (i = n - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
