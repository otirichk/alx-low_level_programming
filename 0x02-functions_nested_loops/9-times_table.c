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
			if (Comp >= 10)
			{
				_putchar ((Comp / 10) + '0');
				_putchar((Comp % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(Comp + '0');
			}
			if (Mult2 < 9)
			{
				_putchar(',');
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
