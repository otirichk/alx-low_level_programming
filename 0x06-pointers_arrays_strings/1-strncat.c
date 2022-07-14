#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate strings 
 *
 * @dest: frist parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Return: concatenated string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
