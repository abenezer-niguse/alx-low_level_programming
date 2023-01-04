#include "main.h"

/**
 * _puts_recursion - prints str
 * @s: the str to printed
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
