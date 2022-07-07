#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints fibonacci series of numbers
 * less than 50
 * starting with 1 and 2
 *
 * Return: series
 *
 */


int main(void)
{
	int i, series;

	for (i = 1; i < 50; i++)
	{
		series += i;
		printf("%d, ", series);
	}
	return (0);
}
