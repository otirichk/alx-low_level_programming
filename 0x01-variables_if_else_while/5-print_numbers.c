#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all digits less than 10
 *
 * Return: always 0
 *
 */

int main(void)
{
	int k;

	while (k < 10)
	{
		printf("%d", k);
		++k;
	}
	return (0);
}

