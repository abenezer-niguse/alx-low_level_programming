#include "main.h"

/**
 * _strcpy - function that print variable
 * @dest: the destiny
 * @src: cop
 *
 * Return: return the dest
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
