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
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((coins - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((coins - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((coins - 5) >= 0)
		{
			coins -= 5;
			continue;
		}
		if ((coins - 2) >= 0)
		{
			coins -= 2;
			continue;
		}
		cents--;
		printf("d\n", coins);
		return (0);
	}
}
