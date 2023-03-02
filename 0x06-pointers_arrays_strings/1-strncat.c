#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: The string to be appended upon
 * @src: The string to be appended to dest
 * @n: number of bytes from src to be appended to dest
 * Return: A pointer to the resulting stringdest
 *
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	des[dest_len++] = src[index];
	return (dest);
}
