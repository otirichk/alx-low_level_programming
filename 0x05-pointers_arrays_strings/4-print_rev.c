#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: the string argument
 */

void print_rev(char *s)
{
	int len = strlen(s), star;

	for (star = len - 1; star >= 0; star--)
	{
		_putchar(s[star]);
	}
	_putchar('\n');
}
