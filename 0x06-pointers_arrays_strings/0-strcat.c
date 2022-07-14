#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: a pointer to the string
 * @src: the string being appended to dest
 *
 * Return: a pointer to the dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int count2, len = 0;

	while (dest[len])
	{
		len++;
	}

	for (count2 = 0; src[count2] != 0; count2++)
	{
		dest[len] = src[count2];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
