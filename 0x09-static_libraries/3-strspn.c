#include "main.h"
/**
 * _strspn - prints the consecutive caracter of s1 that in s2
 * @s: source str
 * @accept: searching str
 *
 * Return: new str
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (j);
}
