#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 * ten times
 *
 * retunr: 0
 *
 */

void more_numbers(void)
{
	int count, Num2;

	for (count = 0; count <= 9; count++)
	{
		for (Num2 = 0; Num2 <= 14; Num2++)
		{
			if (Num2 > 9)
			{
				_putchar((Num2 / 10) + '0');
				_putchar((Num2 % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
