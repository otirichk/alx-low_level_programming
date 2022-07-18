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
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;
	char mem_area = s;

	for (count = 0; count < n; count++)
	{
		mem_area[count] = b;
	}
	return (mem_area);
}
