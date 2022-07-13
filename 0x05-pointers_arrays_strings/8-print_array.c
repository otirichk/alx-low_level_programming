#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: the array
 * @n: the array elements
 *
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
}
