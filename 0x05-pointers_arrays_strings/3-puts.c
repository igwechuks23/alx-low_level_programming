#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: variable
 * Return the length of the string
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		putchar(str[a]);	
		a++;
	}
	putchar('\n');
}
