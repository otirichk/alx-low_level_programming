#include "main.h"

#include <stdlib.h>

/**
 * create_array - creates an array of characters
 *
 * @size: size of the character array
 * @c: the character
 *
 * Return: the array of characters
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *S;

	if (size == 0)
	{
		return (NULL);
	}

	S = (char *)malloc(size * sizeof(char));

	if (S == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < size; count++)
	{
		S[count] = c;
	}

	return (0);
}
