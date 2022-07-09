#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers 1 to 100
 * but "fizz" in place of multiples of 3
 * "buzz" in place of multiples of 5 and
 * "fizzbuzz" in place of multiples of both 3 and 5
 *
 * Return: 0 0n success
 */

int main(void)
{
	int Num3;

	for (Num3 = 1; Num3 <= 100; Num3++)
	{
		if (Num3 % 3 == 0 && Num3 % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (Num3 % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (Num3 % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", Num3);
		}
	}
	printf("\n");
}
