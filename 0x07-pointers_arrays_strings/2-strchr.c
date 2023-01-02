#include "main.h"
/**
 * _strchr - locates a char in str
 * @s: string
 * @c: char to search
 * Return: pointer to the frist occurence
 */
char *_strchr(char *s, char c)
{
	while (*s != '0')
	{
		if (*s == c) /*if s == c*/
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
