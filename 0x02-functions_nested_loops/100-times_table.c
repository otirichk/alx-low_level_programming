#include "main.h"

/**
 * print_times_table - Prints the multiplication table from 0 to n
 *
 * @n: value being passed
 * Return: a table
 *
 */


void print_times_table(int n)
{
	int Mult1, Mult2, Comb;

	if (n >= 0 && n <= 15)
	{

		for (Mult1 = 0; Mult1 <= n; Mult1++)
		{
			_putchar('0');
			for (Mult2 = 1; Mult2 <= n; Mult2++)
			{
				_putchar(',');
				_putchar(' ');
				Comb = Mult1 * Mult2;
				if (Comb <= 9)
				{
					_putchar(' ');
					_putchar(Comb + '0');
				}
				else if (Comb <= 99)
				{
					_putchar(' ');
					_putchar((Comb / 10) + '0');
					_putchar((Comb % 10) + '0');
				}
				else
				{
					_putchar((Comb / 100) + '0');
					_putcar((Comb / 10) % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		break;
	}
}
