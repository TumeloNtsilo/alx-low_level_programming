#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The destination spring
 * @src: The source spring
 * @n: The number of bytes from src to be appended upon dest
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
