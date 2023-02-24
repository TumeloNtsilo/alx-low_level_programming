#include "main.h"

/**
 * largest_number - prints the largest of three integers
 * @a - first interger
 * @b - second interger
 * @c -third interger
 * Return: The largesr number
 *
 */

int largest_number(int a, int b, int c)

{
	if (a >= b && a >= c)
	{
	largest = a;
	}
	else if (b >= a && b >= c)
	{
	largest = b;
	}
	else
	{
	largest = c;
	}
	return (largest);
}

