#include "main.h"
#include <string.h>i
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
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		s[num] = b;
	}
	return (s);
}
