#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: the number of arguments in the program
 * @argv: the array pointer to the arguments
 *
 * Return: 0 on succewss, 1 on error
 *
 */

int main(int argc, char *argv[])
{
	int cents, count, Results = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (count = 0; count < 5 && cents >= 0; count++)
	{
		while (cents >= coins[count])
		{
			cents -= coins[count];
			Results++;
		}
	}
	printf("%d\n", Results);
	return (0);
}
