#include <stdio.h>
#include <stdlib.h>

/**
 * main - print different and unique combinations of three digit numbers
 *
 * Return: always 0
 *
 */

int main(void)
{
	int Dig1, Dig2, Dig3;

	for (Dig1 = 0; Dig1 <= 7; Dig1++)
	{
		for (Dig2 = 0; Dig2 <= 8; Dig2++)
		{
			for (Dig3 = 0; Dig3 <= 9; Dig3++)
			{
				putchar(Dig1);
				putchar(Dig2);
				putchar(Dig3);
			}
		}
	}
	putchar(',');
	putchar(' ');
	return (0);
}

