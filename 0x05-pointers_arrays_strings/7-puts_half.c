#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * The function should print the second half of the string
 * If the number of characters is odd,
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 *
 * @str: the string input
 *
 */

void puts_half(char *str)
{
	int index3, len4 = strlen(str), n;

	if ((len4 % 2) == 0)
	{
		n = len4 / 2;
	}
	if ((len4 % 2) != 0)
	{
		n = (len4 + 1) / 2;
	}
	for (index3 = n; index3 < len4; index3++)
	{
		_putchar(str[index3]);
	}
	_putchar('\n');
}
