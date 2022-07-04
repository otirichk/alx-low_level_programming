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

	for (Dig1 = 48; Dig1 <= 55; Dig1++)
	{
		for (Dig2 = Dig1 + 1; Dig2 <= 56; Dig2++)
		{
			for (Dig3 = Dig2 + 1; Dig3 <= 57; Dig3++)
			{
				putchar(Dig1);
				putchar(Dig2);
				putchar(Dig3);
				if (Dig1 == 55 && Dig2 == 56 && Dig3 == 57)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}

