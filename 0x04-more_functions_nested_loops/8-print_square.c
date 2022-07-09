#include "main.h"

/**
 * print_square - prints sqaure of n size
 *
 * @size: the reference size
 *
 * Return: square
 *
 */

void print_square(int size)
{
	int Len1, Len2;

	if (size > 0)
	{
		for (Len1 = 0; Len1 < size; Len1++)
		{
			for (Len2 = 0; Len2 < size; Len2++)
			{
				_putchar('#');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
