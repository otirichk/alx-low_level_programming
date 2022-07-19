#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: the reference string
 *
 * @accept: the set of bytes
 *
 * Return: accepted set of bytes
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int num = 0, b;

	while (s[num])
	{
		b = 0;
		while (accept[b])
		{
			if (s[num] == accept[b])
			{
				s += num;
				return (s);
			}
			b++;
		}
		num++;
	}
	return ('\0');
}
