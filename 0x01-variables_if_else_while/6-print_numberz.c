#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints integres less than 10 using putchar function
 *
 * Return: Always 0
 */

int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		putchar((m % 10) + '0');
	}
	putchar('\n');
	return (0);
}
