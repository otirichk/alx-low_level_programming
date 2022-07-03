#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints hex numbers in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	char hex;
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
