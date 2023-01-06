#include "main.h"

/**
 * _memset - the first n bytes of the memory area
 * @s: A pointer to the memory area tobe filled
 * @c: The char to fill the memory area with
 * @n: The number of bytes to be filled
 * Return: memory area @s
 */

char *_memset(char *s, char b, unsigned n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
