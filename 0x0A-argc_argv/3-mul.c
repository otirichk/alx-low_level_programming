#include <stdio.h>

/**
 * main - multiplies two integers and print the result
 *
 * @argc: the count of the arguments
 * @argv: the arrays of the arguments
 *
 * Return: always 0
 *
 */

int main(int argc, char *argv[])
{
	int Num1, Num2, Res;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	Num1 = atoi(argv[1]);
	Num2 = atoi(argv[2]);
	Res = Num1 * Num2;

	printf("%d\n", Res);
	return (0);
}
