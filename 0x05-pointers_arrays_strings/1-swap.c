#include "main.h"

/**
 * swap_int - function that swap the value of int
 * @a: frist entry
 * @b: second entry
 */

void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
