#include "main.h"
#include <stdio.h>


/**
 * cap_string - Capitalize strings
 *
 * @str: the string argument
 *
 * Return: the string argument capitalized
 *
 */

char *cap_string(char *str)
{
	int count = 0, i;
	char special[] = {'.', ',', ';', '?',
'!', '"', '(', ')', '{', '}', '\n', '\t', ' '};

	while (str[count])
	{
		if (count == 0 && str[count - 1] == special[i])
		{
			str[count] -= 32;
		}
		if (str[count] >= 97 && str[count] <= 122)
		{
			str[count] -= 32;
		}
		count++;
	}
	return (str);
}
