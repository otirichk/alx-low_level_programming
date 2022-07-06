#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times
 * and in lower case followed by a newline
 *
 * return: nothing (void)
 *
 */

void print_alphabet_x10(void)
{
	int num = 0;
	char alph2;

	while (num < 10)
	{
		for (alph2 = 'a'; alph2 <= 'z'; alph2++)
		{
			_putchar(alph2);
		}
		_putchar('\n');
		num++;
	}
}
