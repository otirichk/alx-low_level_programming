#include "main.h"

/**
 * print_line - prints a line on the stdout
 *
 * @n: number of times the character "_" is printed
 *
 * Return: 0
 *
 */

void print_line(int n)
{
	while (!n)
	{
		if (n > 0)
		{
			_putchar('_');
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
		n++
	}
}
