#include "main.h"



/**
 * _memcpy - copies memory area
 *
 * @dest: destination memory
 *
 * @src: source memory
 *
 * @n: number of bytes to be copied
 *
 * Return: string copied from source
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int num1;
	
	for (num1 = 0; num1 < n; num1++)
	{
		dest[num1] = src[num1];
	}
	return (dest);
}
