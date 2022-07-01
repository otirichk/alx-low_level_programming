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
	char al;

	for (al = 'a'; al <= 'z'; ++al)
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}
	}
	putchar('\n');
	return (0);
}

