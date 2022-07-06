#include "main.h"

/**
 * times_table - prints the multiplication table of 9
 *
 * Return: void
 */

void times_table(void)
{
	int Mult;

	for (Mult = 0; Mult <= 9; Mult++)
	{
		Mult = (Mult * 9);
		_putchar(Mult + '0');
		_putchar(',');
		_putchar(' ');
	}
}
