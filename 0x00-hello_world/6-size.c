#include <stdio.h>
/**
 * main - entry point
 * program prints various types on the machine it is compiled and run on
 *
 * Return: always 0
 *
 */

int main(void)
{
	printf("Size of a char: %zu bytes.\n", sizeof(char));
	printf("Size of an int: %zu bytes.\n", sizeof(int));
	printf("Size of a long int: %zu bytes.\n", sizeof(long int));
	printf("Size of long long int: %zu bytes\n", sizeof(long long int));
	printf("Size of a float: %zu bytes\n", sizeof(float));
	return (0);
}
