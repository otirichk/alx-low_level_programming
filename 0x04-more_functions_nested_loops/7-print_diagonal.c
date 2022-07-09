#include "main.h"

/**
 * print_diagonal - prits the backslash (\) character n times
 * when n is greater than 0
 *
 * @n: the reference integer
 *
 * Return: diagonal line
 */

void print_diagonal(int n)
{
	int g, h;

	if (n > 0)
	{
		for (g = 0; g < n; g++)
		{
			for (h = 0; h < g; h++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
