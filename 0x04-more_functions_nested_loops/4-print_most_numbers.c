#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 * except 2 and 4
 *
 * Return: 0
 *
 */

void print_most_numbers(void)
{
	int Num;

	for (Num = 0; Num <= 9; Num++)
	{
		_putchar((Num % 10) + '0');

		if (Num == 2 && Num == 4)
		{
			continue;
		}
	}
	_putchar('\n');
}
