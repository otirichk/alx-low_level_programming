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
	int l_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_dgt = n % 10;

	if (l_dgt > 5)
	{
		printf("Last digit of", "%d", "is" "%d" "and is greater than 5", n, l_dgt);
	}
	else if (l_dgt == 0)
	{
		printf("last digit of", "%d", "is", "%d", "and is 0", n, l_dgt);
	}
	else if (l_dgt < 6 && l_dgt != 0)
	{
		printf("Last digit of", "%d", "is", "%d", "and is less than 6 and not zero", n, l_dgt)
	}

	return (0);
}

