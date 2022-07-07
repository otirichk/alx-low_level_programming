#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - prints all numbers from larger or lesss than 98 to 98
 *
 * @n: the return value
 *
 * Return: the value of n
 *
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, ", n++);
		printf("%d\n", n);
	}
	while (n >= 98)
	{
		printf("%d, ", n--);
		printf("%d\n", n);
	}
}

