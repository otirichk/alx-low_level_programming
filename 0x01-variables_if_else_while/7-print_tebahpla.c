#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints lowercase alphabets in reverse
 *
 * Return: always 0
 */

int main(void)
{
	char LowerR;

	for (LowerR = 'z'; lowerR <= 'a'; lowerR++)
	{
		putchar(lowerR);
	}
	putchar('\n');
	return (0);
}
