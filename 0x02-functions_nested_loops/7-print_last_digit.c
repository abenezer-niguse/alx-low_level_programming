#include "main.h"
/**
 * print_last_digit - prints the digit of the numbers
 * @n : is the int
 * Return: int value
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = last * -1;

	_putchar(last + '0');

	return (0);
}
