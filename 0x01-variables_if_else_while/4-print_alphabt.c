#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all characters of the alphabet except e and q
 *
 * Return: always 0
 *
 */

int main(void)
{
	char alph;

	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
		++alph;
	}
	putchar('\n');
	return (0);
}

