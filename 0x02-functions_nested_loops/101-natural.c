#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of all multiples of 5 or 5
 * less than 1024
 *
 * Return: sum
 *
 */

int main(void)
{
	int m, sum;

	for (m = 0; m < 1024; m++)
	{
		if (m % 3 == 0 || m % 5 == 0)
		{
			sum += m;
		}
	}
	printf("%d\n", sum);
	return (0);
}
