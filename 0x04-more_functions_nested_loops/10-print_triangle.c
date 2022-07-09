#include "main.h"

/**
 * print_triangle - prints sqaure of n size
 *
 * @size: the reference size
 *
 * Return: square
 *
 */

void print_triangle(int size)
{
	int Len1, Len2;

	if (size > 0)
	{
		for (Len1 = 1; Len1 < size; Len1++)
		{
			for (Len2 = size - Len1; Len2 > 0; Len2--)
			{
				_putchar(' ');
			}
			for (Len2 = 0; Len2 < Len1; Len2++)
			{
				_putchar('#');
			}
			if (Len1 == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
