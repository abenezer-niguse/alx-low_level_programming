#include "main.h"

/**
 * puts2 - prints other chr in str
 * @str: pointer points to str.
 *
 * Return: void.
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
