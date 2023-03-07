#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @needle: the substring
 * @haystack: the string
 * Return: Always 0.
 *
 */

char *_strstr(char *haystack, char *needle)

{
	for (; *haystack != 0; haystack++)
	{
	char *one = haystack;
	char *two = needle;

	while (*one == *two && *two != '\0')
	if (*two == '\0')
	return (haystack);
	}
	return (NULL);
}
