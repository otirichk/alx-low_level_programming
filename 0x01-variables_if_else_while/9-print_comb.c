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

	for (Number = 0; Number < 10; Number++)
	{
		putchar((Number % 10) + '0');
		putchar(',');
		putchar('\n');
	}
	putchar('\n');

	return (0);
}
