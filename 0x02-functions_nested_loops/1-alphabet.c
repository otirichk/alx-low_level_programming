#include "main.h"

/**
 * main - prints alphabets in lowercase
 *
 * return: always 0
 *
 */

void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
	return (0);
}
