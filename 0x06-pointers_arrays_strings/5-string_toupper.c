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
	int n;

	while (str[n])
	{
		if (str[n] >= 97 && str[n] <= 122)
		{
			str -= 32;
		}
		n++;
	}
	return (str);
}
