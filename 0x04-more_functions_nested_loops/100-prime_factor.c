#include <stdio.h>

/**
 * main - Finds the largest prime factor of 612852475143
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	long prime = 612852475143;
	long factor;

	while (factor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (factor = 3; factor < (prime / 2); factor += 2)
		{
			if ((prime % factor) == 0)
			{
				prime /= 2;
			}
		}
	}
	printf("%ld\n", prime);
	return (0);
}
