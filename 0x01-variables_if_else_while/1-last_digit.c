#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - establish the last digit of random number n is greater than 5
 * is zero or less than six and not zero
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int n;
	int n2;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is\n", n);
	n2 = n % 10;

	if (n2 > 5)
	{
		printf("%d and is greater than 5\n", n2);
	}
	if (n2 == 0)
	{
		printf("%d and 0\n", n2);
	}
	else if (n2 < 6 && n2 != 0)
	{
		printf("%d and is less than 6 and not 0\n", n2);
	}
	return (0);
}

