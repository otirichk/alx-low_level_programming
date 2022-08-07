#include "main.h"
#include <unistd.h>

/**
* _putchar - write a character to the stdout
* @c: the character to be written
*
*Return: 1 on success, -1 on error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
