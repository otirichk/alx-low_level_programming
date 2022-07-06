#include "main.h"

/**
 * times_table - prints the multiplication table of 9
 *
 * Return: void
 */

void times_table(void)
{
	int Mult1, Mult2, Comp;

	for (Mult1 = 0; Mult1 <= 9; Mult1++)
	{
		for (Mult2 = 0; Mult2 <= 9; Mult2++)
		{
			Comp = (Mult1 * Mult2);
			_putchar(Comp + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
