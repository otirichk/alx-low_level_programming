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
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("\n");
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("\n");
	}
}

