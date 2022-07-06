#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 *
 * @m: the integer being returned
 *
 * Return: the last digit of an integer
 *
 */

int print_last_digit(int m)
{
	m = (m % 10);
	if (m < 0)
	{
		m = (0 - m);
	}
	_putchar(m + '0');
	return (m);
}
