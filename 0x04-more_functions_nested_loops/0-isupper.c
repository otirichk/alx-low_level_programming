#include "main.h"

/**
 * _isupper - returns 1when uppercase and 0 otherwise
 *
 * @c: character being checked
 *
 * Return: 0 or 1
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
