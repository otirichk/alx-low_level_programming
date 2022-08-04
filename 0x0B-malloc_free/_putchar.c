#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints char c to std output
 * @c: the character
 *
 * Return: 0 on success, 1 on error
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
