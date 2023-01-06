#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - prints the consecutive chr
 * @s: source str
 * @accept: search str
 * Return: new str
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s +  i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
