#include "main.h"

/**
 * jack_bauer - prints every minute of the 24-hour clock system
 *
 *
 * Return: 0
 *
 */

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr <= 2; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			}
		}
	}
}
