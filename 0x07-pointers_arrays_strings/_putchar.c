#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints the character c to stdout
 *
 * @c: the character being printed
 *
 * Return: 1 (success) or -1 (error)
 *
 */

int _outchar(char c)
{
	return (write(1, &c, 1));
}
