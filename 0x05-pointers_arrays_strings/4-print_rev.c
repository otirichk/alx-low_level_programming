#include "main."

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: the string argument
 */

void print_rev(char *s)
{
	int length, star;

	while (s[star++])
	{
		length++;
	}
	for (star = length -1; star >= 0; star--)
	{
		_putchar(s[star]);
	}
	_putchar('\n');
}
