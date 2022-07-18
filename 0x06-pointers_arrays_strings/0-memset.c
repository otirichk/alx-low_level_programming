#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @n: number of bytes of the memory location
 * @s: the memory location
 * @b: constant byte to be written
 *
 * Return: the address to the memory location s
 */

char *_memset(char *s, int b, unsigned int n)
{
	unsigned int count;
	unsigned char *mem_area = s;

	for (count = 0; count < n; count++)
	{
		mem_area[count] = b;
	}
	return (mem_area);
}
