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

	count = 0;

	while (count < 10)
	{
		for (Num = 0; Num <= 14; Num++)
		{
			if (Num <= 9)
			{
				_putchar((Num % 10) + '0');
			}
			else
			{
				_putchar((Num / 10) + '0');
				_putchar((Num % 10) + '0');
			}
		}
		count++;
	}
}
