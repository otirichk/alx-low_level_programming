#include "main.h"

/**
 * _strspn - ets the length of a prefix substring.
 *
 * @s: initial string
 * @accept: accepted
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, n = 0, p = 0;

	while (accept[n])
	{
		m = 0;
		while (s[m] != 32)
		{
			if (accept[n] == s[m])
			{
				p++;
			}
			m++;
		}
		n++;
	}
	return (p);
}
