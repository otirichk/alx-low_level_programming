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
	unsigned long Num1 = 0;
	unsigned long Num2 = 1;
	unsigned long Sum1, Sum2, n;

	while (1)
	{
		Sum1 = Num1 + Num2;

		if (Sum1 < 4000000)
		{
			if ((n % 2) == 0)
			{
				Sum2 += Sum1;
			}
			Num1 = Num2;
			Num2 = Sum1;
		}
		if (Sum1 > 4000000)
		{
			break;
		}
	}
	return (0);
}
