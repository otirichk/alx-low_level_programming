#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of all multiples of 5 or 5
 * less than 1024
 *
 * Return: sum 
 *
 */

int main (void)
{
	int m, sum;
	
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum +=i;
		}
	}
	printf("%d", sum);
	return (0);
}
