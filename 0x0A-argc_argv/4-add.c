#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two positive integers
 * If no number is passed to the program, print 0, followed by a new line
 * if one of the number contains symbols that are not digits, print "Error",
 * followed by a new line, and return 1
 *
 * @argc: count of the arguments
 * @argv: array of the arguments
 *
 * Return: always 0
 *
 */
int main(int argc, char *argv[])
{
	int Num3, Num4, sum = 0;

	for (Num3 = 1; Num3 < argc; Num3++)
	{
		for (Num4 = 0; argv[Num3][Num4]; Num4++)
		{
			if (argv[Num3][Num4] < '0' || argv[Num3][Num4] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[Num3]);
	}
	printf("%d\n", sum);
	return (0);
}
