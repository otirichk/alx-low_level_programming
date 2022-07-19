#include "main.h"

/**
 * _strstr - locates the first occurence of a substring
 *
 * @haystack: the main string
 * @needle: the reference string to be located
 *
 * Return: pointer to the located substring
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int num1 = 0, num2 = 0;

	while (haystack[num1])
	{
		while (needle[num2])
		{
			if (haystack[num1 + num2] != needle[num2])
			{
				break;
			}
			num2++;
		}
		if (needle[num2] == '\0')
		{
			return (haystack + a);
		}
		num1++;
	}
	return ('\0');
}
