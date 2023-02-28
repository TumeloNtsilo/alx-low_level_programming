#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps  the values of two integers
 * @: First integer to be swapped
 * @b: Second integer tobe swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
