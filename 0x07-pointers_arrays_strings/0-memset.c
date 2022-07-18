#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: the memory location
 * @b: the char to fill the location
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to the memory location filled
 *
 */
char *_memset(void *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = a;
	}
	return (s);
}
