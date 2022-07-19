#include "main.h"

/**
 * print_chessboard - prints chess boards suing characters
 *
 * @a: array of chessboard elements
 *
 * Return: chessboard
 *
 */
void print_chessboard(char (*a)[8])
{
	int num1, num2;

	for (num1 = 0; num1 < 8; num1++)
	{
		for (num2 = 0; num2 < 8; num2++)
		{
			_putchar(a[num1][num2]);
		}
		_putchar('\n');
	}
}
