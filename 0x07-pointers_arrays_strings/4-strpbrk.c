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
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			is (s[s] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
