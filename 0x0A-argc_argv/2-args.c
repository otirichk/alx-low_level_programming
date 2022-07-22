#include <stdio.h>

/**
 * main - prints the name of all arguments
 * arguments printed per line, ending with newline
 * @argc: the count of the arguments
 * @argv: the array containing the arguments
 *
 * Return: always 0
 *
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
