#include "main.h"

/**
 * _strncpy - concatenates two strings
 *
 * @dest: a pointer to the string
 * @src: the string being appended to dest
 * @n: the number of bytes copied
 *
 * Return: a pointer to the dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count, len = 0;

	while (dest[len])
	{
		len++;
	}

	for (count = 0; src[count] && count < n; count++)
	{
		dest[count] = src[count];
	}

	for (count = len; count < n; count++)
	{
		dest[count] = '\0';
	}
	return (dest);
}
