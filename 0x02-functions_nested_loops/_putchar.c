#include <unistd.h>

/**
 * _putchar - writes a characeter C to the stdout
 *
 * @c: the character to print
 *
 * Return: on success 1
 * on error, -1 is returned, and error is set appropriately
 *
 */

int _putchard (char c)
{
	return (write (1, &c, 1));
}
