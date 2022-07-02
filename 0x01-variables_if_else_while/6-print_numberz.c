#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints integres less than 10 using putchar function
 *
 * Return: Always 0
 */

int main(void)
{
	int m = 0;

	while (m < 10)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
