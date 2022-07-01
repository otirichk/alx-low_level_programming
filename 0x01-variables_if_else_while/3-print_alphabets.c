#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabets in both lower and upper case
 *
 * Return: always 0
 *
 */

int main(void)
{
	char alph;
	char ALPH;

	for (alph = 'a'; alph <= 'z' ; ++alph)
	{
		putchar('alph');
	}
	for (ALPH = 'A'; ALPH <= 'Z'; ++ALPH)
	{
		putchar('ALPH');
	}
	putchar('\n');
	return (0);
}
