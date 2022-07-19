#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of the two diagonals of
 * a square matrix
 *
 * @a: the marix reference
 * @size: the size of the matrix
 *
 */

void print_diagsums(int *a, int size)

{
	int num, sum1 = 0, sum2 = 0;

	for (num = 0; num < size; num++)
	{
		sum1 += a[(size + 1) * num];
		sum2 += a[(size - 1) * (num + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
