#include "main.h"

/**
 *_islower - checks for a lowercase character
 *
 *@c: the character
 *
 *Return: 1 when is lower, 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
