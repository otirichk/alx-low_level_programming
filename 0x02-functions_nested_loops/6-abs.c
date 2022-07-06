#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @r: the return value
 * Return: the value
 *
 */

int _abs(int r)
{
	if (r < 0)
	{
		r = (0 - r);
	}
	return (r);
}
