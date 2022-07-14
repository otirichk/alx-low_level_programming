#include "main.h"

/**
 * strcat - concatenates two strings 
 *
 * @dest: a pointer to the string 
 * @src: the string being appended to dest
 *
 * Return: a pointer to the dest
 *
 */

char *strcat(char *dest, char *src)
{
	int count = 0, int len = 0;

	while (dest[index++])
	{
		len++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[len++] = src[index];
	}
	return (dest);
}
