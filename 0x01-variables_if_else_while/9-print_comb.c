#include <stdio.h>

/**
 * main - print numbers less than ten separated by comma and space
 *
 * Return: always 0
 *
 */

int main(void)
{
	int Number;

	for (Number = 0; Number <= 9; Number++)
	{
		putchar((Number % 10) + '0');
		if (Number == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
