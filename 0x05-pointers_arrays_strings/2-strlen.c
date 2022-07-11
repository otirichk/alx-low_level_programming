#include "main.h"

/**
 * _strlen - returns the length of a string 
 *
 * @s: the string
 *
 * Return: length of s
 *
 */

int _strlen(int *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
