#include <stdio.h>
/*
 * main - entry point 
 *
 * program prints various types on the machine it is compiled and run on
 */
int main(void)
{
	printf("the size of a character is %d bytes.\n", sizeof(char));
	printf("The size of an integer is %d bytes.\n", sizeof(int));
	printf("The size of a long integer is %d bytes.\n", sizeof(long int));
	printf("The size of long long integer is %d bytes\n", sizeof(long long int));
	printf("The size of a float is %d bytes\n", sizeof(float));
	return (0);
}
