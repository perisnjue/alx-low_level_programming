#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i]);
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
