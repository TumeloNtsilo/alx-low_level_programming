#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0 (Success)
 *
 */

int main(void)

{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a', low <= 'z', low++)
	{
		if (low != e && low != q)
		putchat(low);
	}
		putchar('\n');
		return (0);
}
