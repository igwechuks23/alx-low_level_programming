#include "main.h"

/**
 * print_alphabet_x10 - print x10
 * written by igwechuks23
 * return: 0
 */

void print_alphabet_x10(void)
{
	int new_line = 0;
	char letter;

	while (new_line++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
