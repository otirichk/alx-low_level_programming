#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: the character to be checked
 *
 * Return: 1 when n is greater than 0
 * 0 if n is equal to zero
 * and -1 if n is less than 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
