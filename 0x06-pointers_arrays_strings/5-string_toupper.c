#include "main.h"

/**
 * string_toupper - changes the lowercase letters of a string
 * to uppercase
 *
 * @str: the string
 *
 * Return: string
 *
 */

char *string_toupper(char *str)
{
	int n = 0;

	while (str[n])
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			str -= 32;
		}
		else
		{
			continue;
		}
		n++;
	}
	return (str);
}
