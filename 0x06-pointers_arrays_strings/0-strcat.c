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
	int count, int len = 0;

	while (dest[count++])
	{
		len++;
	}

	for (count = 0; src[count] != 0; count++)
	{
		dest[len] = src[count];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
