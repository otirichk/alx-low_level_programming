#include "main.h"

/**
 * _strchr - ocates a character in a string
 *
 * @s: the string 
 * @c: the first encountered character
 *
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	int num2;

	while (1)
	{
		num2 = *s++;
		if (num2 == c)
		{
			return (s - 1);
		}
		if (num2 == 0)
		{
			return (NULL);
		}
	}
}
