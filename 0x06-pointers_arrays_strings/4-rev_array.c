#include "main.h"
/**
 * reverse_array - fun that reverse content
 * @a: array
 * @n:number of elements
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[index] = tmp;
	}
}
