#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: dest
 *
 */

char *_strcat(char *dest, char *src)

{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	}
	j = 0;
	while (des[j] != '\0')
	{
	des[i] = src[j];
	j++;
	i++;
	}
	dest[i] = '\0';
	return (dest);
}
