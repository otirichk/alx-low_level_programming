#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 *
 * @str: the string input
 *
 */

void puts2(char *str)
{
	int len3 = strlen(str), index2;

	for (index2 = 0; index2 < len3; index2 += 2)
	{
		_putchar(str[index2]);
	}
	_putchar('\n');
}
