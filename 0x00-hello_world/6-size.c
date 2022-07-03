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
	printf("the size of a character is %zu bytes.\n", sizeof(char));
	printf("The size of an integer is %zu bytes.\n", sizeof(int));
	printf("The size of a long integer is %zu bytes.\n", sizeof(long int));
	printf("The size of long long integer is %zu bytes\n", sizeof(long long int));
	printf("The size of a float is %zu bytes\n", sizeof(float));
	return (0);
}
