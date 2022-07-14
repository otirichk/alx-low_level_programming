#include "main.h"

/**
 * cap_string - capitalizes string
 *
 * @str: the original string
 *
 * Return: the capitalized string
 *
 */

char *cap_string(char *s)
{
	int n = 0, i;
	int len = 13;
	char special[] = {0, '\t', '\n', 32, 33, 34, 40, 41, 46, 59, 63, 123, 125};

	while s[n]
	{
		int m = 0;

		while (m < len)
		{
			if ((n == 0 || s[n - 1] == special[i]) && (s[n] >= 97 && s[n] <= 122))
			{
				s[n] -= 32;
			}
			i++
		}
		n++;
	}
	return (s);
}
