#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 *
 * @s: the string  being reversed
 *
 */

void rev_string(char *s)
{
	int len2, index;

	char tmp;

	for (index = len2 - 1; index >= len2 / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len2 - index - 1];
		s[len2 - index - 1] = tmp;
	}
}
