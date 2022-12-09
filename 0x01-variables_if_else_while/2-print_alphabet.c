#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - main function
 *
 * declare a vriable and initalize it with the members
 *
 * Return: return 0 (success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
