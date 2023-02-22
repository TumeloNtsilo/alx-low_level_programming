#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n - number checked
 * Return: 1 for positive number, 0 for zero or -1 for negative number
 *
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
