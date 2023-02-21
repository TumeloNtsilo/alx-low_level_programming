#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  prints all single digit numbers of base 10 starting from 0
 * Return:0 (Success)
 *
 */

int main(void)

{
	int d;

	for (d = 'a', d <= 'z', d++)
	putchar(d);
	putchar('\n');
	return (0);
}
