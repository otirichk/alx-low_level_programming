#include "main.h"
#include <stdlib.h>

/**
 * str_concat - return a pointer to cocatenated strings
 *
 * @s1: The first string
 * @s2: the second string
 *
 * Return: the concateenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *complete_str;
	int index, str_count = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (index = 0; s1[index] || s2[index]; index++)
	{
		len2++;
	}

	complete_str = (char *)malloc(sizeof(char) * len2);

	if (complete_str == NULL)
	{
		return (NULL);
	}
	for (index = 0; s1[index]; index++)
	{
		complete_str[str_count++] = s1[index];
	}

	for (index = 0; s2[index]; index++)
	{
		complete_str[str_count++] = s2[index];
	}
	return (complete_str);
}
