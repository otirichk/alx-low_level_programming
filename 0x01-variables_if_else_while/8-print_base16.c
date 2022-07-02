#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints hex numbers in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	char Hex;

	for (Hex = 0; Hex <= 15; Hex++)
	{
		putchar(Hex);
	}
	putchar('\n');
	return (0);
}
