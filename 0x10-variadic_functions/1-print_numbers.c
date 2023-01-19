#include "variadic_function.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints number, followed by a new line
 * @separator: the str to be printed b/n number
 * @n: the number of int passed to the function
 * @...: a variable number of number to be printed
 */
void print_numbers(const cchar *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
