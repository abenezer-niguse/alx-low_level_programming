#include "main.h"
/**
 * _strlen_recursion - Returns the length of a str
 * @s: the str to be measured
 *
 * Return: the length of str
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
