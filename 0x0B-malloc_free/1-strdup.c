#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a duplicated array
 *
 * @str: the string to be duplicated
 *
 * Return: NULL if not successfull
 * pointer to the duplicate string on success
 *
 */

char *_strdup(char *str)
{
	char *dup;
	int count = 1, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[count])
	{
		count++;
	}

	dup = (char *)malloc(sizeof(char) * (count + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	while (len < count)
	{
		dup[len] = str[len];
		len++;
	}
	dup[len] = '\0';
	return (dup);
}
