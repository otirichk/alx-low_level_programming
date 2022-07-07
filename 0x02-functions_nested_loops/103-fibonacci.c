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
	int i;
	unsigned long Num1 = 0;
	unsigned long Num2 = 1;
	unsigned long Sum, n;

	for (i = 1; i <= 50; i++)
	{
		Sum = Num1 + Num2;
		Num1 = Num2;
		Num2 = Sum;
		if (Sum < 4000000)
		{
			while (Sum < 4000000)
			{
				if (n % 2 == 0)
				{
					printf("%lu", n);
				}
			}
		}
		if (Sum > 4000000)
		{
			break;
		}
	}
	return (0);
}
