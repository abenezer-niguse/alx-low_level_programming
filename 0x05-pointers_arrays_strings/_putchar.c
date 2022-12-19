#include <unistd.h>

/**
 * _putchar - writes the char in c to stdout
 * @index: the chr to print
 *
 * Return: success 1.
 */

int _putchar(char index)
{
	return (write(1, &index, 1));
}
