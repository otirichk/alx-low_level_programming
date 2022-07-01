#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabets in lower case
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; ++alph)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
