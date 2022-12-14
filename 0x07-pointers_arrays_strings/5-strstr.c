#include "main.h"
/**
 * _strstr - first occurence of the substring
 * @haystack: main str
 * @needle: search in haystack
 * Return: return 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*declare var*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*value*/
		str2 = needle;

		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
