#include <stdio.h>
/**
 *main - function
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;
	/* ...that prints 98\n */
	print("a[z] = %d\n", a[2]);
	return (0);
}
