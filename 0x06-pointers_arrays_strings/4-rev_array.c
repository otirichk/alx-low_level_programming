#include "main.h"


/**
 * reverse_array - reverses the contents of an array of integers
 *
 * @a: the array
 * @n: the number of elements of the array
 *
 */

void reverse_array(int *a, int n)
{
	int temp, count;

	for (count = n - 1; count >= n / 2; count--)
	{
		temp = a[n - 1 - count];
		a[n - 1 - count] = a[count];
		a[count] = temp;
	}
}
