#include "main.h"

/**
 * times_table - Prints the multiplication table from 0 to 9
 *
 * Return: 0
 *
 */


void times_table(void)
{
	int Mult1, Mult2, Comb;

	for (Mult1 = 0; Mult1 <= 9; Mult1++)
	{
		_putchar('0');

		for (Mult2 = 1; Mult2 <= 9; Mult2++)
		{
			_putchar(',');
			_putchar(' ');

			Comb = Mult1 * Mult2;

			if (Comb <= 9)
			{
				_putchar (' ');
			}
			else
			{
				_putchar((Comb / 10) + '0');
				_putchar((Comb % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
