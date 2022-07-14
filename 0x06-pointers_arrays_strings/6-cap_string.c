#include "main.h"

/**
 * cap_string - capitalizes string
 *
 * @str: the original string
 *
 * Return: the capitalized string
 *
 */

char *cap_string(char *str)
{
	int n = 0, i;
	int len = 13;
	char special[] = {0, '\t', '\n', 32, 33, 34, 40, 41, 46, 59, 63, 123, 125};

	while str[n]
	{
		int m = 0;

		while (m < len)
		{
			if ((n == 0 || str[n - 1] == special[i]) && (str[n] >= 97 && str[n] <= 122))
			{
				str[n] -= 32;
			}
			i++
		}
	}
	return (str);
}
