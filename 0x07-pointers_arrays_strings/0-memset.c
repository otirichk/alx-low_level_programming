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
void *_memset(void *s, int b, size_t n)
{
	unsigned int count;
	unsigned char mem_area = s, val = b;

	for (count = 0; count < n; count++)
	{
		mem_area[count] = val;
	}
	return (mem_area);
}
