#include "main.h"

/**
 * _islower - checks for a lowercase character
 *
 * @c: the character 
 *
 * return: 1 when is lower, 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}

	else 
	{
		return (1);
	}
}
