#include "main.h"

/**
 * print_line -  function that draws a straight line
 * @n: number of times
 * Returns: Always 0.
 */

void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
