#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints unique two digit number combinations withour repeating
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int Num1;
	int Num2;

	for (Num1 = 0; Num1 < 10; Num1++)
	{
		for (Num2 = 0; Num2 < 10; Num2++)
		{
			putchar((Num1 % 10) + '0');
			putchar((Num2 % 10) + '0');

			if (Num1 == 9 && Num2 == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
