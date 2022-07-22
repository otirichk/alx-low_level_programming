#include <stdio.h>

/**
 * main - Prints the name of the executabe
 *
 * @argc: the count of the arguments
 * @argv: the array of the arguments
 *
 * Return: always 0
 *
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
