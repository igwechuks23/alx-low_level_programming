#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: variable
 * Return the length of the string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]0);
		i++;
	}
	_putchar('\n');
}
